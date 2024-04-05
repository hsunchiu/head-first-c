// Ace
#include <stdio.h>

int main(){
	int card = 1;
	if (card > 7){
		card = card -1;
		if (card < 7)
			puts("Small card");
	} else
		puts("Ace!");

	return 0;
}
