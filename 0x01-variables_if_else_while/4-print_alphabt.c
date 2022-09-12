#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints whether number is greater than 0
 * Return: 0
 */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x == 113 || x == 101)
		{
			x++;
			continue;
		}
		else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
