#include "monty.h"

/**
* pop - del las ele of stack
* @stack: Pointer to the stack.
* @l_n: num of ine
*/
void pop(stack_t **stack, unsigned int l_n)
{
(void) stack;
if (args->head == NULL)
{
dprintf(2, "L%d: can't pop an empty stack\n", l_n);
ags_free();
exit(EXIT_FAILURE);
}

del();
args->stack_l -= 1;
}
