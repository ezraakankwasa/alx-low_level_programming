#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: Address of string
 */
void print_rev(char *s)
{
	int j;

	for (j = _strlen(s); j != -1; --j)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
