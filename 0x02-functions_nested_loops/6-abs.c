#include "main.h"
/**
 * _abs-computes the absolute value
 * @n: number to be computed
 * Return: nabs of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
