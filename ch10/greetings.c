#include <stdio.h>

int main(){
	char name[30];
	printf("Enter your name: ");
	fgets(name, sizeof(name)/sizeof(name[0]), stdin);
	printf("Hello %s\n", name);

	return 0;
}
