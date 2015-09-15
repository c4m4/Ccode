#include <stdio.h>
#include <stdlib.h>

//#define INIT_LIST(list) { &(list), &(list) }
#define INIT_LIST(name) { &(name), &(name) }

struct List {
	struct List *prev, *next;
};

struct Person {
	char *name;
	struct List node;
};

int main(){
	struct List list = INIT_LIST(list);
	struct Person *p = malloc(sizeof(struct Person *));
	p->name = "Emmanuel";
	p->node = list;
	printf("\t next %x and prev %x\n", p->node.next, p->node.prev);
//	while(next){
//		printf("\t%s\n", next->name);
//		next = p->node.next;
//	}
}
