#include "monty.h"
/**
 * pint - DISPLAY the value of TOP node
 * with new line
 * @stack: ptr to the STACK
 * @line_num: number of the line where we need the func
 * Return: noTHING
 **/

void pint(stack_t **stack, unsigned int line_num)
{
	(void) stack;

	if (args->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty", line_num);
		args_freedom();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", args->head->n);
}

