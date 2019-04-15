#include "shell.h"

/**
 * printint - turn number into characters.
 *@num: the given number.
 *Return: the result.
*/

int  printint(int num)
{
	int res;
	char ch;

	if (num > 0)
	{
		res = num % 10;
		num = num / 10;
		printint(num);
		ch = (res + 48);
		if (write(STDOUT_FILENO, &ch, 1) == -1)
			perror("Error on miniPrint ");
	}
	return (res);
}
