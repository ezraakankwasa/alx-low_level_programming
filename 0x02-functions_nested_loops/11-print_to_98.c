#include "main.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: value to be passed in function
 *
 * Return: void.
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar("0" + n);
		n++;
	}
}
