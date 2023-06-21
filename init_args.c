#include "monty.h"

/**
 * init_args - initiallize args to use
 */
void init_args(void)
{
	args = malloc(sizeof(arg_t));
	if (args == NULL) /*check for error in malloc*/
		malloc_error();

	args->instruction = malloc(sizeof(instruction_t));
	if (args->instruction == NULL)
		malloc_error();

	args->stream = NULL;
	args->line = NULL;
	args->head = NULL;
	args->n_tokens = 0;
	args->stack_len = 0;
	args->stack = 1;
	args->line_num = 0;
}
