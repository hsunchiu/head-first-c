#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]){
	/* the rss link in the book are all the dead link. I change them. */
	char* feeds[] = {
		"http://rss.cnn.com/rss/edition_world.rss",
		"https://feeds.npr.org/15709577/rss.xml",
		"https://hnrss.org/newest",
	};


	char * phrase = argv[1];
	for (int i = 0; i < sizeof(feeds)/sizeof(feeds[0]); ++i){
		char var[255];
		sprintf(var,"RSS_FEED=%s", feeds[i]);
		char * vars[] = { var, NULL };
		if (execle("/usr/bin/python", "/usr/bin/python",
					"./rssgossip.py", phrase, NULL, vars) == -1) {
			fprintf(stderr, "Can't run stript: %s\n", strerror(errno));
			return -1;
		}
	}

	return 0;
}

