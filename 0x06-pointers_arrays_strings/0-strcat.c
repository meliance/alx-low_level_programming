#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index] != '\0')
	{
		len++;
		index++;
	}

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[len + index] = src[index];
	}
	dest[len + index] = '\0';

	return (dest);
}
