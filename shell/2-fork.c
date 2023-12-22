#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t child_pid;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    if (child_pid == 0)
    {
        printf("%u is not a parent only child for now\n", my_pid);
    }
    else
    {	sleep(3);
        printf("%u Is a parent of %u \n", my_pid, child_pid);
    }
    return (0);
}