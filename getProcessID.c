/*Выводит идентификатор текущего и родительского процесса*/

#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Current PID: %d \n", (int)getpid());
	printf("Parent PID: %d \n", (int)getppid());
	return 0;
}
