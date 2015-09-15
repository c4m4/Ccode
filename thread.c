#define _MULTI_THREADED
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void *threadfunc(void *parm)
{
  printf("In the thread.\n");

  return NULL;
}

int main(int argc, char **argv)
{
  pthread_t             thread;
  int                   rc=0;
  char                  theName[16];

  pthread_setname_np(thread, "THREADNAMEISTOOLONG");
  memset(theName, 0x00, sizeof(theName));
  printf("Create thread using the default attributes\n");
  rc = pthread_create(&thread, NULL, threadfunc, NULL);
  if(0 == rc)
  {
    rc = pthread_setname_np(thread, "THREADNAMEISTOOLONG");
    if(0 == rc)
    {
      rc = pthread_getname_np(thread, theName);
      if(0 == rc)
      {
        printf("The thread name is %s.\n", theName);
      }
    }
    rc = pthread_join(thread, NULL);
  }
  if(0 != rc)
  {
    printf("An error occurred - %d\n", rc);
  }
  printf("Main completed\n");
  return(rc);
}
