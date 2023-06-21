#include "monty.h"
/**
 * end_stream - Stream closing and NULL
 **/

void end_stream(void)
{
	if (args->stream == NULL)
		return;

	fclose(args->stream);
	args->stream = NULL;
}
