#include "monty.h"

/**
 * free_tok - set all toks free
 */
void free_tok(void)
{
	int t = 0;

	if (args->tk == NULL)
		return;

	while (args->tk[t])
	{
		free(args->tk[t]);
		t++;
	}
	free(args->tk);
	args->tk = NULL;
}
