#include "main.h"

/**
 * print-triangle - print n triangle dimmensions
 * @size: input number of lines to be printed
 */

void print_triangle(int size)
{
	int n = size;
	int i, j;
	int counter = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < n - counter)
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
			counter++;
			_putchar('\n');
		}
	}
}
