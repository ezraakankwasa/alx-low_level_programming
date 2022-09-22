#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: Address of string
 */
void print_rev(char *s)
{
	int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j++;
	}
	for (; j > -1; j--)
	{
		_putchar(*(s + j));
	}
	_putchar(10);
}
