#include "shell.h"

/**
 *handle_exit - manage the exit.
 *@argv: are the arguments.
 *@buffer: is the buffer.
 *@status: is the status of a file.
 *Return: nothing.
 */

void handle_exit(char **argv, char *buffer, int status)
{
	free_argv(argv);
	free(buffer);
	exit(status);
}
