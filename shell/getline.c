#include "stdio.h"
#include "stdlib.h"

int main()
{
	while (1)
	{
		printf("$enter your prompt: ");
		char *command = NULL;
		size_t n = 0;
		int num_read = 0;
		
		num_read = getline(&command, &n, stdin);
		if (num_read == -1)
		{
			free(command);
			perror("failed to read line");
			exit(EXIT_FAILURE);
		}
		printf("your command is: %s", command);
	}
	return 0;
}
