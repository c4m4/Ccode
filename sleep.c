#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){
	char *name;
	printf("\t Hello from sleep\n");
	scanf("%s", &name);
	dup2(1,2);
	printf("\tHello %s\n", name);
}
