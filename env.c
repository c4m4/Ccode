#include <stdio.h>

int main(int argc, char **argv, char **environ)
{
    FILE *f;
for(;;){
    **environ = '=';
}
    f = fopen("/proc/self/environ", "r");
    printf("%c\n", getc(f));

    return 0;
}
