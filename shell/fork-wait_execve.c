#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t child_pid;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i;
	for (i = 1; i <= 5; i++)
	{
		if ((child_pid = fork()) == -1)
		{
			perror("Fork eroor");
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			printf("child process %d created\n", i);
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error occured");
				return (1);
			}

		}
		else
		{
			sleep(2);
			waitpid(child_pid, &status, 0);
			printf("Parent process: child %d exited\n",i);
		}
	}
	return (0);
}
