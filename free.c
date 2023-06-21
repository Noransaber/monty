#include "monty.h"
/**
 * free_h - Remove the memo for the head
 **/
void free_h(void)
{
        if (args->head)
                free_S(args->head);
        args->head = NULL;
}
/**
* free_args - Remove memo for all ptr args
*/

void free_args(void)
{
	if (args == NULL)
		return;

	if (args->instruction)
	{
		free(args->instruction);
		args->instruction = NULL;
	}
	free_h();

	if (args->line)
	{
		free(args->line);
		args->line = NULL;
	}
	free(args);
}
