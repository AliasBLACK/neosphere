#pragma once

#include <stdint.h>

typedef struct watchdog_t watchdog;

// Creates a watchdog thread that after timeout_ms milliseconds kills the application
watchdog* watchdog_monitor(uint64_t timeout_ms);

// Aborts the watchdog
void watchdog_done(watchdog*);
