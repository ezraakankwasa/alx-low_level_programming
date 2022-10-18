#include "main.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: value to be passed in function
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int j = n;

	while (j < 99)
	{
		_putchar('0' + j);
		_putchar(44);
		_putchar(32);
		j++;
	}
}
