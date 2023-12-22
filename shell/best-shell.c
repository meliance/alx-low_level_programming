#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char **tokenize(char *command, char *delim)
{
	char **argv;
	char *cpyCommand = strdup(command);
	char *cpyCommand2 = strdup(command);
	int num_tokens = 0;
	char *token = strtok(cpyCommand, delim);
	while (token != NULL)
	{
		//printf("%s\n", token);
		num_tokens++;
		token = strtok(NULL, delim);
	}

	argv = malloc((num_tokens + 1) * sizeof(char *));
	token = strtok(cpyCommand2,delim);
	int i = 0;
	while (token != NULL)
	{
		argv[i] = malloc((strlen(token) + 1) * sizeof(char));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	free(cpyCommand);
	free(cpyCommand2);

	return (argv);
}

int main(void)
{
	size_t len = 10;
	char *argv[] = {NULL, NULL};
	argv[0] = malloc(sizeof(char) * len);
	if (!argv[0])
	{
		printf("no commands found\n");
		return (-1);
	}

	while(1)
	{
		printf("cisfun$ ");
		char *command = NULL;
		ssize_t read = getline(&command, &len, stdin);
		if ( read == -1)
		{
			free(command);
			printf("exited your shell\n");
			return (1);
		}

		printf("executing %s \n", command);

     		pid_t child_pid = fork();
        	if (child_pid == -1)
        	{
            		perror("fork");
            		exit(EXIT_FAILURE);
        	}

		if ( child_pid == 0)
		{
			char **argv = tokenize(command, " \n\t");
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error occured\n");
				exit(EXIT_FAILURE);
			}
			// printf("error on executing with execve\n");	
		}
		else
		{
			int status;
			wait(&status);
			printf("child process exited \n");
		}
	}
	free(argv[0]);
	return (0);
	
}
