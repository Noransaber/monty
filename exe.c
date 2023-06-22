#include "monty.h"

/**
* run - exec the ins
*/

void run(void)
{
stack_t *stack = NULL;

if (args->n_tk == 0)
return;

args->ins->f(&stack, args->l_n);
}
