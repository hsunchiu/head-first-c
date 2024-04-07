#include <stdio.h>
#include "fish.h"

void catalog(struct fish f){
	printf("%s is a %s with %i tooth. It is %i\n",
			f.name, f.species, f.teeth, f.age);
}

void label(struct fish f){
	printf("Name: %s\n",f.name);
	printf("Species: %s\n", f.species);
}

int main(){
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	label(snappy);

	return 0;
}

