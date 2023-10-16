#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int str;

	for (str = 0; src[str] != '\0'; str++)
	{
		dest[str] = src[str];
	}

	dest[str++] = '\0';

	return (dest);
}
