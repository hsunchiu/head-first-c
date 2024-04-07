#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "island.h"
#include "display-island.c"

island * create(char *name){
	island *i = malloc(sizeof(island));
	i->name = strdup(name);
	i->opens = "9:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

int main(){
	island *start = NULL;
	island * i = NULL;
	island * next = NULL;

	char name[80];

	for (; (fgets(name, sizeof(name), stdin) != NULL); i = next  ) {
		next = create(name);
		if (start == NULL)
			start = next;
		if (i != NULL)
			i -> next = next;
	}

	display(start);

	return 0;

}
