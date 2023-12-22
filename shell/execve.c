#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	// char *argv[] = {"/bin/ls", "-l", "/usr", NULL};
	char *argv[] = {"./fwe", "", "./", NULL};
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error");
	}

	printf("After execve\n");
	return (0);
}
