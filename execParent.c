/*Программа, которая вызывает функцию main из файла execChild.c*/

#include <stdio.h>
#include <unistd.h>

int main(){
	char *args[]={"./c", NULL};
	printf("Current PID: %d \n", (int)getpid());
	execvp(args[0],args);
	return 0;	
}
