#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Program prints whether number is greater than 0
 * Return: 0
 */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	while (x < 123)
	{
		putchar(toupper(x));
		x++;
	}
	putchar('\n');
	return (0);
}
