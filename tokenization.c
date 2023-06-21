#include "monty.h"
/**
 * tokeniziation - break down the line into small pieces
 **/
void tokenization(void)
{
int n = 0;
char *delime = " \n", *token = NULL, *cpy = NULL;
cpy = malloc(sizeof(char) * (strlen(args->line) + 1));
strcpy(cpy, args->line);
args->n_tokens = 0;
token = strtok(cpy, delime);

while (token)
{
args->n_tokens += 1;
token = strtok(NULL, delime);
}
args->tokens = malloc(sizeof(char *) *
	       (args->n_tokens + 1));

strcpy(cpy, args->line);
token = strtok(cpy, delime);
while (token)
{
	args->tokens[n] = malloc(sizeof(char) *
			(strlen(token) + 1));
	if (args->tokens[n] == NULL)
		malloc_error();

	strcpy(args->tokens[n], token);
	token = strtok(NULL, delime);
	n++;
}
args->tokens[n] = NULL;
free(cpy);
}
