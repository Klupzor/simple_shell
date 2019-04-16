#include "shell.h"

/**
 *exe - execute.
 *@argv: are the arguments.
 *Return: always 0.
*/

int exe(char **argv)
{
	int status;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("hsh: ");
		return (-2);
	}
	if (child_pid == 0)
	{
		status = execve(argv[0], argv, NULL);
		if (status  == -1)
		{
			perror("exe Error");
			exit(2);
		}
	}
	else
	{
		wait(&status);
		status = WEXITSTATUS(status);
	}
	return (status);
}

