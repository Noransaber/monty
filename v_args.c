#include "monty.h"

/**
* v_args - sees the valid args
* @argc: nums of args
*/

void v_args(int argc)
{
if (argc == 2)
return;

dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
