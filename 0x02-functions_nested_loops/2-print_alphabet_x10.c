#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - print lowercase alphabet
 * Return: On success 0.
 */
void print_alphabet_x10(void);

/**
 * main - entry point for print_alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int i = 97;
	int j = 1;

	while (j < 11)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		i = 97;
		j++;
	}
}
