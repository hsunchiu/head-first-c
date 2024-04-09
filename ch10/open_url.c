//TODO: try to the version of fork and exec
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// gcc -dM -E -< /dev/null | grep  -i -E 'apple'
// use macro the detectiong the system type when compile time.
void open_url(char *url) {
	char launch[255];
#ifdef _WIN32
	sprintf(launch, "cmd /c start %s", url);
#elif __LINUX__
	sprintf(launch, "x-www-browser '%s' &", url);
#elif __APPLE__
	//sprintf(launch, "open '%s'", url);
	sprintf(launch, "open %s", url);
#else
#error "Not Supported System!"
#endif
	printf("the cmd: %s\n", launch);
	system(launch);
}
