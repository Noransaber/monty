#include "monty.h"
/**
 * are_nums - is string a valid integer?
 * @s: string
 * Return: IF VALID 1, OR 0 IF NOT
 **/

int are_nums(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (a == 0 && s[a] == '-' && s[a + 1])
		{
			a++;
			continue;
		}
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

