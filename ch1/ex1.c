#include <stdio.h>


/* Try to guess what each of these code fragments does*/
int main(){
	int card_count = 11;	// Create an integer variable card_count with a value 11
	if (card_count > 10){	// Is the count more than 10?
		puts("The deck is hot. Increase bet.");	// If so, display a message on the command prpmpt.
	}

	int c = 10;	// create a integer variable `c' and set it to be 10
	while(c > 0){	// As long as the value is positive, display a message
		puts("I must note write code in class");
		c = c - 1;	//And decrease the count.
	}

	/* Assume name shorter than 20 char */	// This is comment.
	char ex[20];				// An array of char with size of 20
	puts("Enter boyfriends's name: ");	// prompt the enter the name
	scanf("%19s",ex);			// Store what you enter into the array
	printf("Dear %s. \n\n\tYou're history.\n",ex);	// Display the infomation to say goodble to your ex.

	char suit = 'H';			// Create a character variable; store the letter H
	switch(suit){				// Look the value of the variable
		case 'C':			// It's 'C'?
			puts("Clubs");		// If so, display
			break;			// Then skip past the other checks.
		case 'D':			// Is it 'D'?
			puts("Diamons");	// If so, display
			break;			// Then skip past the other checks.
		case 'H':			// Is it 'H'?
			puts("Hearts");		// If so, display
			break;			// Then skip past the other checks
		default:			// Otherwise
			puts("Spades");		// Display the word "Spades"
	}
	
	return 0;
}
