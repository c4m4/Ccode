#include <stdio.h>
#include <signal.h>

void myhandle();

struct sigaction act;

int main(){
  act.sa_handler = &myhandle;
  sigaction(SIGTERM, &act, 0);
  printf("\tI am goint to sleep, in this way I can wait for a signal\n");
  sleep(160);
}

void myhandle(){
  printf("\tHello from Signal handle\n");
}
