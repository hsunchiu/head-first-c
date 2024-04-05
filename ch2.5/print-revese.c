#include <stdio.h>
#include <string.h>

void print_reverse(char * s){
	int len = strlen(s);
	char* t =  s + len - 1;
	while(t >= s){
		printf("%c", *t);
		t --;
	}
	puts("");
}
