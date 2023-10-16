#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
	char *s[] = "Programming is fun";
	int i;

	for (i = 0; s[i] != '\0'; ++i)

	printf("Length of the string: %d", i);
	return (0);
}
