#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include <sys/socket.h>
#include <arpa/inet.h>

void error(char *msg){
	fprintf(stderr, "%s: %s\n", msg, strerror(errno));
	exit(1);
}

int main(int argc, char *argv[]){
	char *advice[] = {
		"Take smaller bites\r\n",
		"Go for the tight jeans. No they do NOT make you look fat.\r\n",
		"One word: inappropriate\r\n",
		"Just for today, be honest. Tell your boss what you *really* think\r\n", 
		"You might want to rethink that haircut\r\n"
	};

	// a new fd for a socket	
	int listener_d = socket(PF_INET, SOCK_STREAM, 0);
	if( listener_d == -1){
		error("Can't open socket");
	}

	// Bind to a port
	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t)htons(30000);
	name.sin_addr.s_addr = htonl(INADDR_ANY);
	int c = bind(listener_d, (struct sockaddr *) &name, sizeof(name));
	if( c == -1 ){
		error("Can't bind to socket");
	}

	// Listen
	// You will use a queue with a length of IO
	if (listen(listener_d, 10) == -1){
		error("Can't listen");
	}
	puts("Waiting for connection");

	// Accept a connection
	struct sockaddr_storage client_addr;
	unsigned int address_size = sizeof(client_addr);
	int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size);
	if (connect_d == -1)
		error("Can't open secondary socket");

	puts("Start to send the message");	

	srand(time(0));	

	char *msg = advice[rand() % 5 ];
	// Begin	
	send(connect_d, msg, strlen(msg), 0);

	close(connect_d);
	return 0;
}



