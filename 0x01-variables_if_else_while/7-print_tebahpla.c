#include <stdio.h>
/**
 * main - Entry point
 *Description: 'check for the number is positive or negative'
 *Return: always 0
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
