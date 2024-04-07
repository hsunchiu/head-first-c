#include <stdio.h>
#include "mixed-up.h"
int main(){
	margarita m;
	m = { 2.0, 1.0, {0.5} };
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
	
	return 0;
}
