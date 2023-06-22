#include "monty.h"

/**
 * c_file - file closing
 */
void c_file(void)
{
	if (args == NULL)
		return;
	fclose(args->s);
	args->s = NULL;
}
