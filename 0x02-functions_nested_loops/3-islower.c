#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: Character to be run through function
 *
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 || c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
