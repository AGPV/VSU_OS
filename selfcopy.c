/*Создание 8 процессов с указанием PID для каждого */

#include <stdio.h>
#include <unistd.h>

int main(){
	fork();
	fork();
	fork();
	printf("Copied successfully \n");
	printf("Current PID: %d \n", (int)getpid());
	printf("Parrent PID: %d \n", (int)getppid());
	return 0;	
}
