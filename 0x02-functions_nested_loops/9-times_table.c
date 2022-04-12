#include "main.h"
/**
 * times_table-prints timtabel
 */
void times_table(void)
{
	int outer, inner  , c;

	for (outer = 0 ;outer < 10; outer++)
	{
		_putchar('0');
		c = outer;

		for (inner = 0 ; inner < 10 ; inner++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + c);
			c = c + outer;
		}
		_putchar('\n');
	}
}
			


