/*Программа, которая вызывает функцию main из файла execChild.c*/

#include <stdio.h>
#include <unistd.h>

int main(){
	char *args[]={"./execChild", NULL};
	printf("Current PID: %d \n", (int)getpid());
	printf("Parrent PID: %d \n", (int)getppid());
	execvp(args[0],args);
	return 0;	
}
