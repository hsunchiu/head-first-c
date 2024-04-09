#include <stdio.h>
#include <unistd.h>
#include "error.h"
#include "open_url.h"

int main(int argc, char *argv[]){
	char *phrase = argv[1];
	// I change the rss address to substitute the dead rss link.
	char *vars[] = { "RSS_FEED=http://rss.cnn.com/rss/edition_world.rss", NULL };
	
	int fd[2];

	if(pipe(fd) == -1){
		error("Can't create pipe");
	}

	pid_t pid = fork();

	if (pid == -1) {
		error("Can't fork process");
	}

	if (!pid){
		// close input pipeline input endpoint and dup2 the output pipeline endpiont to fd 1
		dup2(fd[1], 1);
		close(fd[0]);

		if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py", "-u", phrase, NULL, vars) == -1) {
			error("Can't run script");
		}
	}

	// the parent close the output endpoint and dup2 the input endpoint to fd 0
	dup2(fd[0], 0);
	close(fd[1]);


	char line[255];

	while(fgets(line, 255, stdin)){
		if (line[0] == '\t'){
			printf("url: %s\n", line + 1);
			open_url(line + 1);
		}
	}

	return 0;
}
