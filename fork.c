#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){
	printf("\t Before\n");
	int pid,fd;
	if((pid = fork()) != -1){
		printf("\tHello from fork\n");
		fd = open("/etc/passwd", O_RDONLY);
		sleep(120);
	}
}
