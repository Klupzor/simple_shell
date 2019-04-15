#include "shell.h"

/**
 * cmd_not_found - print the error.
 *@cmd: is the command to be print.
 *@line: is the line were fails.
 *@erdir: direction to the error.
 *Return: nothing.
 */

int cmd_not_found(char *cmd, int line, char *erdir)
{
	if (erdir)
	{
		printError(erdir);
		printError(": ");
	}

	printint(line);
	printError(": ");
	printError(cmd);
	printError(": not found\n");
	return (127);
}
