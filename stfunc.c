#include <stdio.h>

void myprint(void);
typedef void(*func_t)(void);

typedef struct {
	func_t s;
	func_t f;
} class_t;

//class_t s[5] = { [ 0 ... 4 ] =  &myprint,  &myprint };
class_t s[10] = {};
s[0] = {  .s = &myprint, .f = &myprint };
s[1] = {  .s = &myprint,  .f = &myprint };

int main(){
	s[0].s();
	s[0].f();
	s[1].s();
	s[1].f();
}

void myprint(){
	printf("\tciao silvia\n");
}
