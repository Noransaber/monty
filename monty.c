#include "monty.h"
arg_t *args = NULL;

/**
 * main - Start point of the prog
 * @agc: args num
 * @agv: array of args
 * Return: SUCCESS ZERO
 */
int main(int agc, char **agv)
{
	size_t z = 0;

	v_args(agc);
	i_args();
	g_f(agv[1]);

	while (getline(&args->l, &z, args->fl) != -1)
	{
		args->l_n += 1;
		tokenizer();
		get_in();
		run();
		free_tok();
	}
	c_file();
	free_args();
	return (0);
}
