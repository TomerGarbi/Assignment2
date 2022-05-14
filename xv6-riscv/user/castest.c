#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"



void main(int argc, char argv)
{
    int f1 = fork();
    int f2 = fork();
    if (f1 > 0 && f2 > 0)
    {
        printf("%d\n", getpid());
    }
    else if (f1 == 0 && f2 > 0)
    {
        printf("%d\n", getpid());
    }
    else if(f1 > 0 && f2 == 0)
    {
        printf("%d\n", getpid());
    }
    else if (f1 == 0 && f2 == 0)
    {
        printf("%d\n", getpid());
    }
    exit(0);
}