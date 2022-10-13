#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *main - check the code
 *Return: Always 0
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
    
	ptr = _strcat(s1, s2);
	printf("%s", ptr);
	return (0);
}

char *_strcat(char *dest, char *src)
{
	int i, j = 0, length = 0;
	char hold[500];

	for (i = 0; *(dest + i); i++)
	{
		hold[i] = *(dest + i);
	}
	
	while (*(src + j))
	{
		i++;
		hold[i] = *(src + j);
		j++;
	}

	length = i + j;
	i = 0;

	while (i < length)
	{
		*(dest + i) = hold[i];
		i++;
	}

	return (dest);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}
	
	dest[i + 1] = *(src + (i + 1));

	return (dest);
}

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
		i += 1;
	}

	printf("\n");
}

void puts_half(char *str)
{
	int i, half, length;
	
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
		half = length/2;
	}

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar(10);
}

void print_rev(char *s)
{
	int j, count, index, size;

	index = 0;
	size = 0;

	for (count = 0; *(s + count) != '\n'; count++)
	{
		size++;
	}

	while (s[index] != '\n')
	{
		for (size; size > -1; size--)
		{
			_putchar(*(s + size));
		}
		index++;
	}
	_putchar(10);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include "main.h"

/**
 * _puts - print string to stdo
 * @str: Address of string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
