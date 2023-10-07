#include <stdio.h>
/**
 * main - Entry point
 *Description: 'check for the number is positive or negative'
 *Return: always 0
 */
int main(void)
{
	char ab = 'a';

	while (ab <= 'z')
	{
		if (ab != 'e' && ab != 'q')
		{
		putchar(ab);
		}
		ab++;
	}
	putchar('\n');
	return (0);
}
