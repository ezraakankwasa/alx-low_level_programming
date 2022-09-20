#include "main.h"

/**
 * _strlen - return length of string.
 * @s: Address of string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);
	return (count);
}
