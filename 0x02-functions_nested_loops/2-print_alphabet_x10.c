#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 1;

	while (j < 11)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		i = 97;
		j++;
	}
}
