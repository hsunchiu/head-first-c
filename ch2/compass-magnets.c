#include <stdio.h>

void go_south_east(int * lat, int * lon){
	*lat -= 1;
	*lon += 1;
}

int main(){
	int latitude = 32;
	int lontitude = -64;
	
	go_south_east(&latitude, &lontitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, lontitude);

	return 0;
}
