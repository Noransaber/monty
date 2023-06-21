#include "monty.h"
/**
 * push - put number in stack
 * @stack: ptr to STACK
 * @line_num: line where we need the func
 **/
void push(stack_t **stack, unsigned int line_num)
{
	stack_t *newN;
	(void) stack;
	if (args->n_tokens <= 1 || !(are_nums(args->tokens[1])))
	{
		args_freedom();
		dprintf(2, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	newN = malloc(sizeof(stack_t));
	if (newN == NULL)
		malloc_error();
	newN->next = newN->prev = NULL;
	newN->n = (int) atoi(args->tokens[1]);
	if (args->head == NULL)
		args->head = newN;
	else
	{
		if (args->stack)
		{
			newN->next = args->head;
			args->head->prev = newN;
			args->head = newN;
		}
		else
		{
			stack_t *nodeT = args->head;

			while (nodeT->next)
				nodeT = nodeT->next;
			nodeT->next = newN;
			newN->prev = nodeT;
		}
	}
				args->stack_len += 1;
}
