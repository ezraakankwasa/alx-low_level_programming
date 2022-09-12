#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints numbers between 0 and 9 using putchar
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
