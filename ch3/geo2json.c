#include <stdio.h>

int main(){
	float latitude;
	float lontitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while((scanf("%f,%f,%79[^\n]\n", &latitude, &lontitude, info)) == 3){
		if (started)
			printf(",\n");
		else
			started = 1;
		printf("{latitude: %f, longtitude: %f, info: '%s'}", latitude, lontitude, info);

	}
	puts("\n]");

	return 0;
}

			
