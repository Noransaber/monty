#include "monty.h"

/**
 * free_tok - Remove the MEMORY for tokens.
 */
void free_tok(void)
{
	int n = 0;

	if (args->tokens == NULL)
		return;

	while (args->tokens[n])
	{
		free(args->tokens[n]);
		n++;
	}
	free(args->tokens);
	args->tokens = NULL;
}

