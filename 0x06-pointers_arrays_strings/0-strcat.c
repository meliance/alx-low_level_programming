#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index])
	{
		dest_len++;
		index++;
	}

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';

	return (dest);
}
