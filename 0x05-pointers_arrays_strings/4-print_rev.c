#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: Address of string
 */
void print_rev(char *s)
{
	int j, count, index, size;

	index = 0;
	size = 0;

	for (count = 0; *(s + count) != '\n'; count++)
	{
		size++;
	}

	while (s[index] != '\n')
	{
		for (size; size > -1; size--)
		{
			_putchar(*(s + size));
		}
		index++;
	}
	_putchar(10);
}
