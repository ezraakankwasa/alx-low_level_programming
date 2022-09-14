#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: value to be passed in function
 *
 * Return: last digit of n;
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	_putchar('0' + j);
	return (j);
}
