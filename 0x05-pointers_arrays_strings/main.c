#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *main - check the code
 *Return: Always 0
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
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
