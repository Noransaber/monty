#include "monty.h"

/**
 * add - 2 elems addition func on the top
 * @stack: ptr to stack
 * @line_num: line where ufnc call
 * Return nothind void
 **/
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *tempN1, *tempN2;
	(void) stack;

	if (args->stack_len < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_num);
		args_freedom();
		exit(EXIT_FAILURE);
	}

	tempN1 = args->head;
	tempN2 = tempN1->next;

	tempN2->n = tempN1->n + tempN2->n;
	del_node();
	args->stack_len -= 1;
}
