#include <stdio.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
