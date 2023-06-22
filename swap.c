#include "monty.h"
/**
 * swap - changes between two nodes
 * @stack: ptr to s
 * @l_n: num of line.
 */
void swap(stack_t **stack, unsigned int l_n)
{
	stack_t *node1, *node2;

	(void) stack;
	if (args->stack_l < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", l_n);
		all_free();
		exit(EXIT_FAILURE);
	}

	node1 = args->head;
	node2 = node1->next;
	node1->next = node2->next;
	if (node1->next)
	{
		node1->next->prev = node1;
	}
	node2->next = node1;
	node1->prev = node2;
	node2->prev = NULL;
	args->head = node2;
}
