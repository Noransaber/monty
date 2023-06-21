#include "monty.h"
/**
 * stream_failer - handle error during openning files
 * @filename: path to the file name
 **/

void stream_failer(char *filename)
{
	dprintf(2, "Error: Can't open file %s\n", filename);
	free_args();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - open file to read
 * @filename: path nam to the file
 * Return: VOID
 **/

void getting_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1) /*error during openning*/
		stream_failer(filename);
	args->stream = fdopen(fd, "r");
	if (args->stream == NULL)
	{
		close(fd);
		stream_failer(filename);
	}
}

