#include "main.h"

/**
  * _memcpy - Copy a memory area
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
