#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints whether number is greater than 0
 * Return: 0
 */
int main(void)
{
	int x = 'A';

	while (x < '{')
	{
		if (x >= '[' && x <= '`')
		{
			putchar(127);
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
