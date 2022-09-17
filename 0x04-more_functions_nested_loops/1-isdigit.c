#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: input character to be checked
 * Return: 1 if c is digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
