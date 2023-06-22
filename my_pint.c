#include "monty.h"
/**
* pint - display the top value.
* @stack: ptr to stack.
* @l_n: num of line.
*/
void pint(stack_t **stack, unsigned int l_n)
{
(void) stack;
if (args->head == NULL)
{
dprintf(2, "L%d: can't pint, stack empty\n", l_n);
ags_free();
exit(EXIT_FAILURE);
}
printf("%d\n", args->head->n);
}
