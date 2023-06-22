#include "monty.h"

/**
 * i_args - define my args
 */
void i_args(void)
{
	args  = malloc(sizeof(arg_t));
	if (arg == NULL)
		malloc_m();

	args->ins = malloc(sizeof(instruction_t));
	if (args->ins == NULL)
		malloc_m();

	args->s = NULL;
	args->head = NULL;
	args->l = NULL;
	args->n_tk = 0;
	args->l_n = 0;
	args->stack_l = 0;
	args->stack = 1;
}

