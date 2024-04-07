#include <string.h>
#include <stdio.h>

int NUM_ADS  = 7;

char * ADS[]= {
	"William: SBM GSOH likes sports, TV, dinning",
	"Matt: SWM NS likes art, movies, theater",
	"Luis: SLM ND likes books, theater, art",
	"Mike: DWM DS likes trucks, sports and bieber",
	"Peter: SAM likes chess, working out and art",
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dinning",
};

void find(){
	int i;
	puts("Search results:");
	puts("------------------------------------");

	for(i=0; i < sizeof(ADS) / sizeof(ADS[0]); ++i ){
		if(strstr(ADS[i],"sports") && ! strstr(ADS[i], "bieber")){
			printf("%s\n", ADS[i]);
		}
	}
	puts("------------------------------------");
}

int main(){
	find();
	return 0;
}
