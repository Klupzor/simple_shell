#include "shell.h"

/**
 * cmd_not_found - print the error.
 *@cmd: is the command to be print.
 *@line: is the line were fails.
 *@erdir: direction to the error.
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
