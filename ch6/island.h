#pragma once
typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island * next;
} island;
