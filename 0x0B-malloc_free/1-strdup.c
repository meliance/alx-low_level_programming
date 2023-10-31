#include "main.h"
/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: a string.
 * Return: a pointer.
 */
char *_strdup(char *str)
{
	char *k;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	k = malloc((sizeof(char) * strlen(str)) + 1);

	if (k == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
	{
		k[i] = str[i];
	}
	return (k);
}
