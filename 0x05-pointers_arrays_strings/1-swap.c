#include "main.h"
/**
 * swap_int-swaps a value
 * @a: first input
 * @b: secod input
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
