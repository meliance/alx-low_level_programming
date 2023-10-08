#include <stdio.h>
/**
 * main - Entry point
 *Description: 'a program that prints combinations of two digits'
 *Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		if (i < j)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || (i == '8' && j != '9'))
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
