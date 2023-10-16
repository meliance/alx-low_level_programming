#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
