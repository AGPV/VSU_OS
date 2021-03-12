/*Выводит идентификатор текущего и родительского процесса*/

#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Current PID: %d \n", (int)getpid());
	printf("Parrent PID: %d \n", (int)getppid());
	return 0;
}
