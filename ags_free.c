#include "monty.h"

/**
 * h_free - set memo for h free
 */
void h_free(void)
{
	if (args->head)
		s_free(args->head);

	args->head = NULL;
}
/**
 * ags_free - set all args free
 **/
void ags_free(void)
{
	if (args == NULL)
		return;

	if (args->ins)
	{
		free(args->ins);
		args->ins = NULL;
	}
	h_free();
	if (args->l)
	{
		free(args->l);
		args->l = NULL;
	}
	free(args);
}
