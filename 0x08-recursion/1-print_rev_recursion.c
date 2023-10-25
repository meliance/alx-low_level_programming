#include "main.h"

/**
 * _print_rev_recursion - revers of the string
 * @s: string
 * return: always 1
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
