#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Program prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
