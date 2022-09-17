#include "main.h"

/**
 * print_square - print n square dimmensions
 * @size: input number of lines to be printed
 */

void print_square(int size)
{
	int n = size;
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
