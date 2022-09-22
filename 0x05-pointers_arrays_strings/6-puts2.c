#include "main.h"

/**
 * puts2 - print string to stdo
 * @str: Address of string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
