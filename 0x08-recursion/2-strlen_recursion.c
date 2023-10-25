#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * return: always 1
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s != '\0')
		return (len + _strlen_recursion(s + 1);
	return (0);
}
