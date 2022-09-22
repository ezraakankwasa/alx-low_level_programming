#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string
 * @dest: destination of string
 * @src: string to be copied
 * Return: @dest array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}

	return (dest);
}
