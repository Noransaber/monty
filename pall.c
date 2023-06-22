#include "monty.h"

/**
 * pall - displat eles
 * @stack: ptr  stack.
 * @l_n: num of line
 */
void pall(stack_t **stack, unsigned int l_n)
{
	stack_t *node;

	if (args->head == NULL)
		return;
	(void) l_n;
	(void) stack;

	node = args->head;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
