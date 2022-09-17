#include "main.h"

/**
 * print_line - print n lines
 * @n: input number of lines to be printed
 */

void print_line(int n)
{
	while  (n != 0)
	{
		_putchar('_');
		n--;
	}
}
