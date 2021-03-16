/*Создание нового  процесса функцией fork() указанием PID и PPID для каждого */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
	pid_t pid;
	int ex;
	switch (pid=fork()){
		case 0:
			printf("Current PID: %d \n", (int)getpid());
			printf("Parrent PID: %d \n", (int)getppid());
			exit(ex);
			break;
		default:
			printf("Current PID: %d \n", (int)getpid());
			printf("Parrent PID: %d \n", (int)getppid());
			wait(0);
		       	break;
	}
	return 0;	
}
