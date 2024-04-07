#include <stdlib.h> /* `malloc' and `free' funtion */
#include <stdio.h>  /* `fguts' */
#include <string.h> /* `strdup' */

typedef struct island {
	char * name;
	char * opens;
	char * closes;
	struct island * next;
} island;

void display(island * i){
	while( i != NULL){
		printf("Name: %s Open %s-%s\n", i->name, i->opens, i->closes);
		i = i-> next;
	}
}

island * create(char * name) {
	island * i = malloc(sizeof(island));
	i->name = strdup(name);
	i->opens = "9:00";
	i->closes = "15:00";
	i->next = NULL;
	return i;
}

void release(island * start){
	island * next = NULL;
	while(start != NULL){
		next = start->next;
		free(start->name);
		free(start);
		start = next;
	}
}

int main(){
	island * start = NULL;
	island * i = NULL;
	island * next = NULL;
	char name[80];
	while(fgets(name,sizeof(name),stdin) != NULL){
		next = create(name);

		if (start == NULL)
			start = next;

		if (i != NULL)
			i->next = next;
		i = next;
	}

	display(start);
	release(start);

	return 0;
}
