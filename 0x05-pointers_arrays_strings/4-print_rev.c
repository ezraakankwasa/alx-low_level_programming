#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: Address of string
 */
void print_rev(char *s)
{
	int index, i;

	index = 0;
	while (*s != '\n')
	{
		s++;
		index++;
	}
	for (i = index; i > -1; i--)
	{
		_putchar(*(s + index));
	}
	_putchar(10);
}
