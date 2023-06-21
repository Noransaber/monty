#include "monty.h"
arg_t *args = NULL;

/**
 * main - Enter point to the program
 * @argc: num of args
 * @argv: array of arguments
 * Return: ZERO ON SUCCESS.
 */

int main(int argc, char **argv)
{
	size_t f = 0;

	valid_args(argc);/*check for vaild num of args*/
	 init_args();/*init args*/
	getting_stream(argv[1]);/*open the file in read mode*/


	while (getline(&args->line, &f, args->stream) != -1)
	{
		args->line += 1;/*monetor line num*/
		tokenization();/*break down line into pieces*/
		get_instruc();/*opcode getting*/
		run();/*run the instruc*/
		free_tok();
	}

	end_stream();/*close the file*/
	free_args();/*free to avoid memo leak*/

	return (0);
}



