#include <stdio.h>

int main(){
	char *dummy = "dummy";

	char s[] = "dummy";


	printf("dummy is %p\n", dummy);
	printf("the address of dummy is %p\n",&dummy);
	printf("s is %p\n", s);
}
