#include "monty.h"

/**
 * push - inserts int into stack
 * @stack: ptr to stack
 * @l_n: line num
 */
void push(stack_t **stack, unsigned int l_n)
{
	if (args->n_tk <= 1 || !(c_num(args->tk[1])))
	{
		ags_free();
		dprintf(2, "L%d: usage: push integer\n", l_n);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_m();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(args->tk[1]);
	if (args->head == NULL)
		args->head = *stack;
	else
	{
		if (args->stack)
		{
			(*stack)->next = args->head;
			args->head->prev = *stack;
			args->head = *stack;
		}
		else
		{
			stack_t *node = args->head;

			while (node->next)
				node = node->next;
			node->next = *stack;
			(*stack)->prev = node;
		}
	}
	args->stack_l += 1;
}
