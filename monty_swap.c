#include "monty.h"

/**
 * swap - change between the last two elements of the stack
 * @stack: ptr to stack
 * @line_num: line where ufnc call
 * Return nothind void
 **/
void swap(stack_t **stack, unsigned int line_num)
{
        stack_t *tempA, *tempB;
        (void) stack;

        if (args->stack_len < 2)
        {
                dprintf(2, "L%d: can't swap, stack too short\n", line_num);
                args_freedom();
                exit(EXIT_FAILURE);
        }

	tempA = args->head;
	tempB = tempA->next;
	tempA->next = tempB->next;

	if (tempA->next)
		tempA->next->prev = tepmA;

	tempB->next = tempA;
	tempA->prev = tempB;
	tempB->prev = NULL;
	args->head = tempB;
}
