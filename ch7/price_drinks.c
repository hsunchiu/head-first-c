#include <stdio.h>
#include <stdarg.h>

enum drink {
	MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink d) {
	switch(d) { 
		case MUDSLIDE: return 6.79;
		case FUZZY_NAVEL: return 5.31;
		case MONKEY_GLAND: return 4.82; 
		case ZOMBIE: return 5.89;
	}
	return 0; 
}

float total(int n, ...){
	float sum = 0.0;
	va_list ap;
	va_start(ap,n);

	for(int i=0; i<n; ++i){
		sum += price(va_arg(ap,enum drink));
	}
	
	va_end(ap);
	return sum;
}	


int main(){
	printf("Price is %.2f\n", total(2, MONKEY_GLAND, MUDSLIDE)); 
	printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL)); 
	printf("Price is %.2f\n", total(1, ZOMBIE));
	return 0;
}
