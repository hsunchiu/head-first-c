#include <stdio.h>
#include <unistd.h>


static void print(int optc, int argc, char *argv[], int optind){
	static int cnt = 1;
	printf("%02d: optc - '%c', argv: ", cnt++, optc);
	for (int i =0; i < argc; i++){
		printf("%s ", argv[i]);
	}
	printf("---- optind = %d\n", optind);
	return;
}

int main(int argc, char * argv[]){
	int optc;

	print('0', argc, argv, optind);

	while((optc = getopt(argc, argv, ":ab:c:de::")) != -1) {
		print(optc, argc, argv, optind);
		switch(optc){
			default:
				break;	
		}
	}

	print('0', argc, argv, optind);

	return 0;
}
