#include "island.h"

void display(island* start){
	while(start != NULL ) {
		printf("Name: %s open: %s-%s\n", start->name, start->opens, start->closes);
		start = start->next;
	}
}
