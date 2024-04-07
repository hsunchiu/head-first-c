#include <stdio.h>
#include <string.h>

int scores[] = {543,323,32,554,11,3,112};

int compare_scores(const void* score_a, const void* score_b) {
	int a = *(int*)score_a; 
	int b = *(int*)score_b; 
	return a - b;
}

int compare_scores_desc(const void * score_a, const void * score_b){
	return *(int*)score_b - *(int*)score_a;
}


typedef struct {
	int width;
	int height;
} rectangle;

int compre_areas(const void *a, const void *b){
	return ((rectangle*)a)->width * ((rectangle*)a)->height - ((rectangle*)b)->width * ((rectangle*)b)->height;
}
int compare_names(const void* a, const void* b){
	return strcmp(*(char**)b, *(char**)a);
}

int compare_names_desc(const void* a, const void* b){
        return strcmp(*(char**)a, *(char**)b);
}

int main() {
	int scores[] = {543,323,32,554,11,3,112};
	int i;
	qsort(scores, 7, sizeof(int), compare_scores_desc); 
	puts("These are the scores in order:");
	for (i = 0; i < 7; i++) { 
		printf("Score = %i\n", scores[i]);
	}
	char *names[] = {"Karen", "Mark", "Brett", "Molly"}; 
	qsort(names, 4, sizeof(char*), compare_names); 
	puts("These are the names in order:");
	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]); 
	}
	return 0; 
}
