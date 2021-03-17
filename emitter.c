#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

int main(int argc, char *argv[]){
	if (argc == 3){
		if ((strcmp(argv[2], "SIGUSR1") == 0) || (strcmp(argv[2], "SIGUSR2") == 0)){
			int pid = atoi(argv[1]);
			int sig;
			if (strcmp(argv[2], "SIGUSR1") == 0){
				sig = 10;
			} else if (strcmp(argv[2], "SIGUSR2") == 0) {
				sig = 12;
			}
			kill(pid, sig);
			printf("Signal send \n");
		} else {
			printf("Argument error \n");
		}
	} else {
		printf("Argument error \n");
	}
}
