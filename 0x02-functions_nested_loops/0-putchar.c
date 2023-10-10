#include <stdio.h>
/**
 * main - Entry point
 *Description: 'Write a program that prints _putchar'
 *Return: always 0
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
