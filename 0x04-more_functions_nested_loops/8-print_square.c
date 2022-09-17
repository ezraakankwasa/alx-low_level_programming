#include "main.h"

/**
 * print_square - print n square dimmensions
 * @n: input number of lines to be printed
 */

void print_square(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
