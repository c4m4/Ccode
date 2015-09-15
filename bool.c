#include <stdio.h>
#include <stdlib.h>

#define FEMALE 1
#define MALE 2
/* my simple comment */
#define IS_FEMALE(e)((e)->type == FEMALE)
#define IS_MALE(e)((e)->type == MALE)

typedef struct {
	char *name;
	int type;
} person_t;

person_t *new;

int main(){
	if((new = (person_t *)malloc(sizeof(person_t))) != NULL)
		new->type = 2;
		new->name = "Mario";
	 	printf("\t%d\n", IS_FEMALE(new));
	 	printf("\t%s - Type %d\n", new->name, IS_MALE(new));
}	
