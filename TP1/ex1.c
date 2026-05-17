#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
    pid_t pid = fork();
    printf("%d\n",pid);
    if (pid < 0)
    {
        printf("problem de fork !\n");
    }
    if (pid > 0)
    {
        printf("je suis le pere\n");
        printf("le pid de pere est %d ,et de fils est : %d \n " , getpid(),pid);
    }

    if (pid == 0)
    {
        printf("je suis le fils\n");
        printf("le pid de pere est %d ,et de fils est : %d\n" , getppid(),getpid());
    }

    return 0;
}
