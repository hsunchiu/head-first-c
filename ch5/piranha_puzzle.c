#include <stdio.h>
#include "fish.h"

void catalog(struct fish f){
	printf("%s is a %s with %i tooth. It is %i\n",
			f.name, f.species, f.teeth, f.age);
}

int main(){
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);

	return 0;
}

