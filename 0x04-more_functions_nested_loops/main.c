#include "main.h"
#include <unistd.h>
/**
 *main - check the code
 *Return: Always 0
 */

int main(void)
{
	print_square(10);
	return (0);
}

void print_square(int size)
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

int _putchar(char c)
{
	return (write(1, &c, 1));
}
