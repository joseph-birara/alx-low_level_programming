#include "main.h"
/**
 * _isalpha-checks if c is a letter
 * @c: letter to be ckecked
 * Return: 1 for ture and 0 for false
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
