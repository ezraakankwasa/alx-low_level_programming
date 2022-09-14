#include "main.h"

/**
 * main - entry point for print_alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
