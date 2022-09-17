#include "main.h"

/**
 * print_diagonal - print n diagonals
 * @n: input number of lines to be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while  (n != 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
}
