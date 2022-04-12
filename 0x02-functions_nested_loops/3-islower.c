#include "main.h"
/**
 * int _islower- checks for lowercase 
 * @c: letter to bechecked
 * Return: returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

