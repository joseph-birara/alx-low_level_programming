#include "main.h"
/**
 * times_table-prints timtabel
 */
void times_table(void)
{
	int outer, inner ,counter;

	for (outer = 0 ;outer < 10; outer++)
	{
		_putchar('0');
		counter = outer;

		for (inner = 0 ; inner < 10 ; inner++)
		{
			_putchar(',');
			counter = counter + outer;
			_putchar('counter');
		}
		_putchar('\n');
	}
}
			


