#include "main.h"

/**
 * puts_half - prints half a string.
 * @str: pointer to string.
 */

void puts_half(char *str)
{
	int half, length;

	half = 0;
	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 3 == 0)
	{
		half = (length - 1) / 2;
	}
	else
	{
		half = length / 2;
	}

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar(10);
}
