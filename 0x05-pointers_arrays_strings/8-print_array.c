#include "main.h"

/**
 * print_array - prints array
 * @a: pointer to array
 * @n: number of items to printed out.
 */

void print_array(int*a, int n)
{
	int i =0;
	int j;

	while (i < n)
	{
		j = *(a + i);

		if (j < 0)
		{
			_putchar(45);
			j = j * -1;
		}

		if ( j > 1000)
		{
			_putchar('0' + (j / 1000));
			if ((j / 100) % 10 == 0)
			{
				_putchar('0' + 0);
			}

			j = j % 1000;
		}

		if (j > 100)
		{
			_putchar('0' + (j / 100));
			if ((j / 10) % 10 == 0)
			{
				_putchar('0' + 0);
			}

			j = j % 100;
		}

		if (j > 9)
		{
			_putchar('0' + (j / 10));
			j = j % 10;
		}

		_putchar('0' + j);

		if (i == n - 1)
		{
			break;
		}

		_putchar(44);
		_putchar(32);

		i += 1;
	}
	_putchar(10);
}
