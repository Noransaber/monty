#include "monty.h"

/**
 * c_num - sees if it has a vaild num or not
 * @s: string to be checked
 * Return: valid ONE. NONVALID ZERO
 */
int c_num(char *s)
{
	int c = 0;

	while (s[c])
	{
		if (c == 0 && s[c] == '-' && s[c + 1])
		{
			c++;
			continue;
		}
		if (s[c] < '0' || s[c] > '9')
			return (0);
		c++;
	}
	return (1);
}
