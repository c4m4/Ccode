#include <stdio.h>

typedef struct {
	char *name;
} person_t;

#define MAX 10
#define EMM 0
#define SILVIA 1

person_t person[MAX] = {
	[EMM] = "Emmanuel",
	[SILVIA] = "Silvia",
};


int main(){
	printf("\t%s\n", person[EMM]);
	printf("\t%s\n", person[SILVIA]);
}
