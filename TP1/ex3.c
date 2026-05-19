#include<stdio.h>
#include<sys/types.h>
#include <unistd.h>
#include<stdlib.h>

int main(void)
{
    pid_t pid = fork();
    if (pid == 0)
    {
        printf("je suis le fils avec pid : %d \n",getpid());
    exit(0);
    }

    if (pid > 0  )
    {
        printf("je suis le pere !  pid : %d \n",getpid());
        sleep (30) ;
        printf("avec pid :%d\n",getpid());
    }

https://ankiweb.net/shared/info/2100338713
}