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
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
