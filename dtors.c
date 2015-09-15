#include <stdio.h>


void cleanup() __attribute__((destructor));

int main(){
	printf("\tHello from main\n");
}

void cleanup(){
	printf("\tCleanup function\n");
}
