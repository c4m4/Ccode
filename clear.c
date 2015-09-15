#include <stdio.h>


int main(){
	char *s = "Emmanuel";
	printf("\t%s\n", s);
	(char *)s[0] = 0;
}
