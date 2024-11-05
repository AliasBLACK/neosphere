#include "watchdog.h"

#include "allegro5/allegro.h"

#if defined(_WIN32)
#include <windows.h>
#else
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#endif

void killApplication()
{
#if defined(_WIN32)
	ExitProcess(1);
#else
	exit(1);
#endif
}


uint64_t get_current_time_ms() {
    #if defined(_WIN32)
    FILETIME ft;
    ULARGE_INTEGER li;
    GetSystemTimeAsFileTime(&ft);
    li.LowPart = ft.dwLowDateTime;
    li.HighPart = ft.dwHighDateTime;
    return (li.QuadPart / 10000);
    #else
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
    #endif
}

typedef struct watchdog_t
{
	bool done;
	uint64_t timer_ms;
	ALLEGRO_MUTEX* mutex;
} watchdog;

void* watchdog_thread(void* data)
{
	watchdog* w = data;
	while (true)
	{
		al_lock_mutex(w->mutex);
		if (w->done)
		{
			al_unlock_mutex(w->mutex);
			break;
		}
		al_unlock_mutex(w->mutex);

		if (w->timer_ms < get_current_time_ms())
		{
			killApplication();
			break;
		}
	}
	al_destroy_mutex(w->mutex);
	free(w);
	return NULL;
}

watchdog* watchdog_monitor(uint64_t timeout_ms)
{
	watchdog* w = malloc(sizeof(watchdog));
	if (w)
	{
		w->done = false;
		w->timer_ms = get_current_time_ms() + timeout_ms;
		w->mutex = al_create_mutex();
		al_run_detached_thread(&watchdog_thread, w);
	}
	return w;
}

void watchdog_done(watchdog* w)
{
	al_lock_mutex(w->mutex);
	w->done = true;
	al_unlock_mutex(w->mutex);
}
