/*Программа, которая будет вызвана функцией execvp()*/

#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Code has been replaced with execvp() \n");
	printf("Current PID: %d \n", (int)getpid());
	printf("Parrent PID: %d \n", (int)getppid());
	return 0;	
}
