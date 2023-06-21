#include "monty.h"
/**
 *  wrong_instruc - Unkown instruc error handling
 **/
void wrong_instruc(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			args->line_num, args->tokens[0]);
	args_freedom();
	exit(EXIT_FAILURE);
}
/**
 * get_instruc - instruc setting
 **/
void get_instruc(void)
{
	int z = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall},
		{NULL. NULL}
	};
	if (args->n_tokens == 0)
		return;
	if (args->tokens[0][0] == '#')
	{
		args->instruction->opcode = "nop";
		args->instruction->f = nop;
		return;
	}
	for (; instructions[z].opcode != NULL; z++)
	{
		if (strcmp(instructions[z].opcode, args->tokens[0]) == 0)
		{
		args->instruction->opcode = instructions[z].opcode;
		args->instruction->f = instructions[z].f;
		return;
	}
}
wrong_instruc();
}
