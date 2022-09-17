#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 11)
	{
		int j = 0;

		while (j < 15)
		{
			_putchar('0' + i);
			j++;
		}
		_putchar(10);
	}
	_putchar(10);
}
