#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: value to be passed in function
 *
 * Return: value of int and 0;
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	_putchar(j + "0");
}
