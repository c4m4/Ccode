#include <stdio.h>

#define NCALLS 32

void cat(void);
typedef void (*ptr_t)(void);


ptr_t myptr[NCALLS+1] = { [0 ... NCALLS] = &cat, };

int main(){
	printf("\t%p\n",myptr[0]);
	printf("\t%p\n",myptr[1]);
	printf("\t%p\n",myptr[2]);
	printf("\t%p\n",myptr[3]);
	printf("\t%p\n",myptr[4]);
	myptr[0]();
	myptr[1]();
	myptr[2]();
	myptr[3]();
	myptr[4]();
}

void cat(void){
	printf("\tHello word\n");
}
