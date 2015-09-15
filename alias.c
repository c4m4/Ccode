#include <stdio.h>

void myprint(){
	printf("\thello from myprint\n");
}

void newprint() __attribute__((alias("myprint")));

void main(){
	newprint();
}
	
