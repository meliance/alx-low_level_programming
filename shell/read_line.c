#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = NULL;
	size_t len = 0;

	while(1)
	{
		printf("$ ");
		ssize_t read = getline(&buffer, &len, stdin);
		if (read == -1)
		{
			free(buffer);
			printf("Exiting your shell program\n");
			exit(EXIT_SUCCESS);
		}
		printf("%s", buffer);
	}
	free(buffer);
	return (0);
}

