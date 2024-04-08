#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]){
	char* feeds[] = {"http://www.cnn.com/rss/celebs.xml",
		"http://www.rollingstone.com/rock.xml",
		"http://eonline.com/gossip.xml"
	};

	int times = 3;

	char * phrase = argv[1];
	for (int i = 0; i < times; ++i){
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

