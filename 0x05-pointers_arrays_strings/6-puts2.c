#include "main.h"

/**
 * _puts2 - print string to stdo
 * @str: Address of string
 */
void _puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
