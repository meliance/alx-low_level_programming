#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string to be printed.
 * return: void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	if (*s == '\0')
	_putchar('\n');
	return;
}
