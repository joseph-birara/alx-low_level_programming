#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a charavoid rev_string(char *s)
 * Return: nothing
 */
 void rev_string(char *s)
{
	char c;
	char *start, *end;
	int i, length;

	length = 0;
	for (i = 0; s[i]; i++)
		*end++;
	for (i = 0; i < length / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;
		start++;
		end++;
	}
}

