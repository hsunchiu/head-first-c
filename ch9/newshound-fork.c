#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]){
	char* feeds[] = {
                "http://rss.cnn.com/rss/edition_world.rss",
                "https://feeds.npr.org/15709577/rss.xml",
                "https://hnrss.org/newest",
        };
	


	int times = 3;

	char * phrase = argv[1];
	for (int i = 0; i < times; ++i){
		char var[255];
		sprintf(var,"RSS_FEED=%s", feeds[i]);
		char * vars[] = { var, NULL };
		pid_t pid = fork();/* first, call fork() to clone the process. */
		if (pid == -1){
			fprintf(stderr, "Can't fork process: %s\n", strerror(errno));
			return 1;
		}
		if (!pid) { /* This is the sme as if (pid == 0).running in the child process. */
			if (execle("/usr/bin/python", "/usr/bin/python",
						"./rssgossip.py", phrase, NULL, vars) == -1) {
				fprintf(stderr, "Can't run stript: %s\n", strerror(errno));
				return 1;
			}
		}
	}
	return 0;
}

