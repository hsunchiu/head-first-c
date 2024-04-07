#include <stdio.h>
// It's defination and declaration at the same time.
struct {
	const char *name;
	const char *species;
	int teeth;
	int age;
} fish ,*pfish=&fish;

int main(){
	//fish f;
	fish.name = "Snappy";
	printf("%s\n", pfish->name);
	return 0;
}
