#include <stdlib.h>
#include <stdio.h>
#include "island.h"
#include "display-island.c"

island * create(char *name){
	island *i = malloc(sizeof(island));
	i->name = name;
	i->opens = "9:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

int main(){
	char name[80];
	fgets(name, 80, stdin);
	island *p_island0 = create(name);
	fgets(name, 80, stdin);
	island *p_island1 = create(name);
	p_island0-> next = p_island1;
	display(p_island0);
}

