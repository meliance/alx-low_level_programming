#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: return 0
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
