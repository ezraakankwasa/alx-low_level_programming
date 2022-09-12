#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints numbers from 0 to 9 comma seperated
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(32);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
