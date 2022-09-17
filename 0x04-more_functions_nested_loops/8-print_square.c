#include "main.h"

/**
 * print_square - print n square dimmensions
 * @size: input number of lines to be printed
 */

void print_square(int size)
{
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
