#include "main.h"
/**
 * print_last_digit- prints digit
 * @n:input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;

	_putchar('0' + c);
	return (c);
}

