/* I want to test the descriptor num, if I used dup2 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(){
	FILE * my_file = fopen("rssgossip.py", "r");

	if ( !my_file){
		fprintf(stderr, "Can't open: %s\n", strerror(errno));
		return 1;
	}
	int fd = fileno(my_file);

	printf("the fd before dup2 is %d\n", fd);

	dup2(3,2);

	printf("the fd after dup2(3,2), the fd of stderr is %d\n", fileno(stderr));
	printf("the fd after dup2(3,2) is %d\n", fileno(my_file));

	dup2(3,5);

	printf("the fd after dup2(3,5) is %d\n", fileno(my_file));	

	return 0;
}
