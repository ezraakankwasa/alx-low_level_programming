#include "main.h"

/**
 * print_square - print n square dimmensions
 * @size: input number of lines to be printed
 */

void print_square(int size)
{
	int n = size;
	int i, j;

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
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
