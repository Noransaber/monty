#include "monty.h"
/**
 * pall - prints the stack values
 * @stack: ptr to stack
 * @line_num: line num where pall is call
 * Return: NOTHING
 **/
void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *tempN;

	if (args->head == NULL)
		return;

	(void) stack;
	(void) line_num;

	tempN = args->head;
	if (tempN != NULL)
	{
		printf("%d", tempN->n);
		tempN = tempN->next;
	}
}
