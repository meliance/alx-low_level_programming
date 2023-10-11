#include "main.h"

/**
 * print_sign - prints the sign of the given number +/-
 * @n: Number to be tested
 *
 *
 * Return: 1 if positive and greater than zero, 0 if is Zero, and -1 if neg.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

