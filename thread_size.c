#include <stdio.h>

#define PAGE_SIZE 4096
#define THREAD_ORDER  2

#define THREAD_SIZE  (PAGE_SIZE << THREAD_ORDER)

int main(){
  printf("\tTHREAD_SIZE %d\n", THREAD_SIZE);
}
