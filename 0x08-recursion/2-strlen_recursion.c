#include "main.h"
/**
 * _strlen_recursion - prints string length.
 * @s: a string
 * Return: a length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	len++;
	return (len + _strlen_recursion(s + 1));
}
