#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	src[50] = "forgeeks";
	dest[50] = "geeks";
	ptr = strcat(dest, src);
	return (ptr);
}
