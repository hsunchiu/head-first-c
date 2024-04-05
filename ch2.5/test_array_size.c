#include <stdio.h>

int main(){
	int arrary[3][4][5];
	printf("sizeof array[0][0][0] is %d\n", sizeof(arrary[0][0][0]));
	printf("sizeof array[0][0]    is %d\n", sizeof(arrary[0][0]));
	printf("sizeof array[0]       is %d\n", sizeof(arrary[0]));
	printf("sizeof array          is %d\n", sizeof(arrary));
	return 0;
}
