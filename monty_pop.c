#include "monty.h"
/**
 * pop -  rem/del the last ele in stack
 * @stack: ptr to stack
 * @line_num: num of the line where the function needed
 * Return: nothing
 **/

void pop(stack_t **stack, unsigned int line_num)
{
	(void) stack;

	if (args->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_num);
		args_freedom();
		exit(EXIT_FAILURE);
	}
	del_node();
	args->stack_len -= 1;
}
