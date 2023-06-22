#include "monty.h"

/**
 * invalid_message - message for invalid instr
 */
void invalid_message(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", args->l_n,
			args->tk[0]);
	all_free();
	exit(EXIT_FAILURE);
}
/**
 * g_ins - instruction setting
 **/
void g_ins(void)
{
	int g = 0;
	instruction_t ins[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add_monty},
		{"pall", &pall},
		{NULL, NULL}
	};
	if (args->n_tk == 0)
		return;
	if (args->tk[0][0] == '#')
	{
		args->ins->opcode = "nop";
		args->ins->f = nop;
		return;
	}
	for (; ins[g].opcode != NULL; g++)
	{
		if (strcmp(ins[g].opcode, args->tk[0]) == 0)
		{
			args->ins->opcode = ins[g].opcode;
			args->ins->f = ins[g].f;
			return;
		}
	}
	invalid_message();
}

