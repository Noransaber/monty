#include "monty.h"

/**
* args_freedom - Remove all allocated memo for all args ptr
*/
void args_freedom(void)
{
	end_stream();
	free_tok();
	free_args();
}
