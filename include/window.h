#ifndef WINDOW_H
#define WINDOW_H

#include <stdbool.h>

typedef enum
{
	WINDOW_EDITOR,
	WINDOW_TERMINAL
} WindowType;

typedef struct
{
	int id;
	char[100] title;
	WindowType type;
	bool active;
	bool running;
} Window;

#endif
