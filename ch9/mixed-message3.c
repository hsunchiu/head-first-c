#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]){
	if(execl("./coffee", "coffee", NULL) == -1){
		fprintf(stderr,"Can't create order: %s\n", strerror(errno));
		return 1;
	}
	return 0;
}
