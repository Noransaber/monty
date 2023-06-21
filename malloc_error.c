#include "monty.h"
/**
 * malloc_error - handle the error of malloc
 **/

void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	args_freedom();
	exit(EXIT_FAILURE);
}
