#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be run through function
 *
 * Return: 1 if c is a letter or 0 if otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
