#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>


int main(){
	int range = 1000;
	int x; x = open("passwd", O_WRONLY|O_CREAT|O_APPEND);
	int i = 0;
	for( i = 0; i <= range; range++)
		write(x,"hello world\n",12);
		sleep(2);
}

