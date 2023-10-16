#include "main.h"

/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  *
  * Return: length of string
  */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
