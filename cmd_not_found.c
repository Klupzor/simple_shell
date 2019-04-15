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
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("no child on cmd_not_found: ");
	}
	if (child_pid == 0)
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
		exit(127);
	}
	else
	{
		wait(&status);
		status = WEXITSTATUS(status);
	}
	return (status);
}
