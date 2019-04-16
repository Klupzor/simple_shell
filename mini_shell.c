#include "shell.h"

/**
 *handle_sigint - entry point.
 *@sig_number: is the signal.
 *
 *Return: 0.
*/

void handle_sigint(int sig_number)
{
	(void) sig_number;
	miniPrint("\n");
	fflush(stdout);
}

/**
 *main - entry point.
 *@argc: number of arguments.
 *@arg: are the arguments.
 *Return: 0.
*/

int main(int argc, char **arg)
{
	char *buffer, **argv, *erdir = arg[0];
	size_t bufsize = 32;
	ssize_t characters = 0;
	int line = 0, status = 0;
	(void) argc;
	status = 0;
	while (characters != -1)
	{
		line++;
		buffer = (char *)malloc(bufsize * sizeof(char));
		if (buffer == NULL)
		{
			perror("Unable to allocate buffer");
			exit(1);
		}
		signal(SIGINT, handle_sigint);
		characters = getline(&buffer, &bufsize, stdin);
		if (characters == -1)
		{
			free(buffer);
			break;
		}
		argv = split(buffer);
		if (search_slash(argv[0]) == 1)
		{
			status = exe(argv);
		}
		else if (argv[0])
		{
			if (catch_binfunc(buffer, argv, status) == 0)
				if (search_path(argv) == 0 && *argv[0] != '\n')
					status = cmd_not_found(argv[0], line, erdir);
		}
		free_argv(argv);
		free(buffer);
	}
	return (status);
}
