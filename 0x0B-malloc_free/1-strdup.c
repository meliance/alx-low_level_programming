#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: a string.
 * Return: a pointer.
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	c = malloc((sizeof(char) * strlen(str)) + 1);

	if (c == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
	{
		c[i] = str[i];
	}
	return (c);
}
