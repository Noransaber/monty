#include "monty.h"

/**
 * valid_args - check the nym of args
 * @argc: num of args
 **/

void valid_args(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
