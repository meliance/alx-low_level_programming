#include <stdio.h>
/**
 * main - Entry point
 *Description: 'check for the number is positive or negative'
 *Return: always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
