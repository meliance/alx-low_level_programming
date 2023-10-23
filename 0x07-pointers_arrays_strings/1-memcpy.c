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
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = sr[i];
		n--;
	}
	return (dest);
}
