#include "main.h"
/**
 * print_times_table-prints tabele
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int in, ot,c;

		for (ot = 0; ot <= n; ot++)
		{
			_putchar('0');
			c = ot;

			for (in = 0 ; in < n; in++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('c');
				c = c + ot;

			}
			_putchar('\n');
		}
	}
}

