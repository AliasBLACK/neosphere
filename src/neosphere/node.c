#include "node.h"

void
yoga_init()
{
	YGNodeRef node = YGNodeNew();
	YGNodeFree(node);
}

