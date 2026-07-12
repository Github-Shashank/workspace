#ifndef PANE_H
#define PANE_H

#include "window.h"
#include <stdbool.h>

typedef struct
{
	Window windows[100];
	int window_count;
	int active_window;
	bool focused;
} Pane;

#endif
