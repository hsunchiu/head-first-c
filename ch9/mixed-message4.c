#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]){
	char *my_env[] = {"FOOD=donuts", NULL}; 
	if(execle("./coffee", "coffee", NULL, my_env) == -1){
		fprintf(stderr,"Can't create order: %s\n", strerror(errno));
		return 1;
	}
	return 0;
}
