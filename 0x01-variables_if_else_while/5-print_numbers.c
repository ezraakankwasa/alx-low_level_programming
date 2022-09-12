#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints numbers between 0 and 9
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
