#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	while(1)
	{
		printf("$ ");
		ssize_t read = getline(&buffer, &len, stdin);
		if (read == -1)
		{
			break;
		}
		// printf("%s", buffer);
		token = strtok(buffer, " ");
		while(token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	}
	free(buffer);
	return (0);
}

