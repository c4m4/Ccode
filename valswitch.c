#include <stdio.h>


int main(){
	int x = 10,b = 20;
	printf("\t%p - %p \n",x, b);
	x ^= b;
	printf("\t%p - %p \n",b, x);
}
