#include "monty.h"

/**
* q_com - looks if it has #
* Return: ZERO or ONE
*/
int q_com(void)
{
	if (
			args->tk &&
			args->tk[0] &&
			args->tk[0][0] == '#'
	   )
		return (1);
	return (0);
}

