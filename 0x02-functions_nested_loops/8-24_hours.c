#include "main.h"
/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
 *
 * Return : void
 */
void jack_bauer(void)
{
	int h0, h1;
	int m0, m1;

	for (h0 = 0 ; h0 <= 2 ; h0++)
	{
		for (h1 = 0 ; h1 < 10 ; h1++)
		{
			for (m0 = 0 ; m0 < 6 ; m0++)
			{
				for (m1 = 0 ; m1 < 10 ; m1++)
				{
					_putchar('0' + h0);
					_putchar('0' + h1);
					_putchar(':');
					_putchar('0' + m0);
					_putchar('0' + m1);
					_putchar('\n');
					if (h0 == 2 && h1 == 3 && m0 == 5 && m1 == 9)
					{
						return;
					}
				}
			}
		}
	}
}
