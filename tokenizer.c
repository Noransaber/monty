#include "monty.h"
/**
* tokenizer - broke down the line
*/
void tokenizer(void)
{
int i = 0;
char *marker = " \n", *t = NULL, *cpy = NULL;

cpy = malloc(sizeof(char) * (strlen(args->l) + 1));
strcpy(cpy, args->l);
args->n_tk = 0;
t = strtok(cpy, marker);
while (t)
{
args->n_tk += 1;
t = strtok(NULL, marker);
}

args->tk = malloc(sizeof(char *) *
(args->n_tk + 1));
strcpy(cpy, args->l);
t = strtok(cpy, marker);
while (t)
{
args->tk[i] = malloc(sizeof(char) *
(strlen(t) + 1));
if (args->tk[i] == NULL)
malloc_m();
strcpy(args->tk[i], t);
t = strtok(NULL, marker);
i++;
}
args->tk[i] = NULL;
free(cpy);
}
