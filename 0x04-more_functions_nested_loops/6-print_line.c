#include "main.h"

/**
 * print_line - print n lines
 * @n: input number of lines to be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while  (n != 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
