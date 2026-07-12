#ifndef WORKSPACE_H
#define WORKSPACE_H

#include "pane.h"
#include <stdbool.h>

typedef enum
{
	EDITOR_PANE,
	TERMINAL_PANE
} PaneType;

typedef struct
{
	Pane editor_pane;
	Pane terminal_pane;

	PaneType active;
	
	bool running;
} Workspace;

#endif
