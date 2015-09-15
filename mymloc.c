#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>


#define SIZE(e)( (unsigned long)e * 1024 * 1024 * 1024)

int main(){
	printf("\t%lu\n", SIZE(100));
	malloc(SIZE(100));
	sleep(120);
}
