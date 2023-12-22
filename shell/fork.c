#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t my_pid;
    pid_t pid;

    printf("Before fork\n");
    pid = fork();  // Create a new process

    if (pid == -1)  // Check for fork failure
    {
        perror("Error:");
        return (1);
    }

    printf("After fork\n");

    if (pid == 0)  // Code executed by the child process
    {
        my_pid = getpid();
        printf("I am the child process with pid %u\n", my_pid);
    }
    else  // Code executed by the parent process
    {
        my_pid = getpid();
        printf("I am the parent process with pid %u. My child's pid is %u\n", my_pid, pid);
    }

    return (0);
}
