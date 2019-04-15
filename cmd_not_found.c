#include "shell.h"

/**
 * cmd_not_found - print the error.
 *@cmd: is the command to be print
 *Return: nothing.
 */

void cmd_not_found(char *cmd, int line, char *erdir)
{
	if (erdir)
	{
		miniPrint(erdir);
		miniPrint(": ");
	}

	printint(line);
	miniPrint(": ");
	miniPrint(cmd);
	miniPrint(": not found\n");
}
