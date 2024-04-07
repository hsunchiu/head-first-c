#include <string.h>
#include <stdio.h>


char * ADS[]= {
	"William: SBM GSOH likes sports, TV, dinning",
	"Matt: SWM NS likes art, movies, theater",
	"Luis: SLM ND likes books, theater, art",
	"Mike: DWM DS likes trucks, sports and bieber",
	"Peter: SAM likes chess, working out and art",
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dining",
};

int sports_no_bieber(char *s){
	return strstr(s,"sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s){
	return strstr(s, "sports") || strstr(s, "workout");
}

int ns_theater(char *s){
	return strstr(s, "NS") && strstr(s, "theater"); 
}

int arts_theater_or_dining(char *s){
	return strstr(s, "art") || strstr(s, "theater") || strstr(s, "dinning");
}

void find(int(*match)(char *s)){
	int i;
	puts("Search results:");
	puts("------------------------------------");

	for(i=0; i < sizeof(ADS) / sizeof(ADS[0]); ++i ){
		if(match(ADS[i])){
			printf("%s\n", ADS[i]);
		}
	}
	puts("------------------------------------");
}

int main(){
	
	find(sports_no_bieber);
	find(sports_or_workout);
	find(ns_theater);
	find(arts_theater_or_dining);

	return 0;

}
