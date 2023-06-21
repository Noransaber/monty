#include "monty.h"
/**
 * run - run the instructions
 **/

void run(void)
{
	stack_t *stack = NULL;

	if (args->n_tokens == 0) /*no instructions*/
		return;

	args->instruction->f(&stack, args->line_num);
}
