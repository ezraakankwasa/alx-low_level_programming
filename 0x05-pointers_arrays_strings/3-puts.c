#include "main.h"

/**
 * _puts - print string to stdo
 * @str: Address of string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\n'; i++)
	{
		_putchar(str[i]);
	}
}
