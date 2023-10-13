#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
