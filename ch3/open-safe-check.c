#include <stdio.h>

int main(){
	FILE *in;

	if(!(in = fopen("i_dont_exist.txt","r"))){
		fprintf(stderr,"Can't open the file.\n");
		return 1;
	}
	fclose(in);

	return 0;
}
