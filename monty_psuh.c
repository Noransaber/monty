#include "monty.h"
/**
 * push - put number in stack
 * @stack: ptr to STACK
 * @line_num: line where we need the func
 **/
void push(stack_t **stack, unsigned int line_num)
{
	if (args->n_tokens <= 1 || !(are_nums(args->tokens[1])))
	{
		args_freedom();
		dprintf(2, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_error();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(args->tokens[1]);
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
			stack_t *nodeT = args->head;

			while (nodeT->next)
				nodeT = nodeT->next;
			nodeT->next = *stack;
			(*stack)->prev = nodeT;
		}
	}
				args->stack_len += 1;
}
