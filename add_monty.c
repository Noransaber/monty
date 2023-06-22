#include "monty.h"
/**
 * add_monty - inserts 2 elems at the stack
 * @stack: ptr to s
 * @l_n: line number
 */
void add_monty(stack_t **stack, unsigned int l_n)
{
	stack_t *n1, *n2;

	(void) stack;
	if (args->s_l < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", l_n);
		all_free();
		exit(EXIT_FAILURE);
	}
	n1 = args->head;
	n2 = n1->next;

	n2 = n1->n + n2->n;
	del();
	args->s_l -= 1;
}
