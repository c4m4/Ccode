#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>


#define SIZE(e)( (unsigned long)e * 1024 * 1024 * 1024)

int main(){
	printf("\t%d\n", SIZE(1));
	mlock((unsigned long *)malloc(SIZE(1)), SIZE(1));
	sleep(120);
}
