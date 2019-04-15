#include "shell.h"

/**
 *handle_exit - manage the exit.
 *@argv: are the arguments.
 *@buffer: is the buffer.
 *Return: nothing.
*/

void handle_exit(char **argv, char *buffer, int status)
{
	free_argv(argv);
	free(buffer);
	exit(status);
}

