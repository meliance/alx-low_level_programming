#include <stdio.h>
/**
 * main - Entry point
 *Description: 'check for the number is positive or negative'
 *Return: always 0
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
