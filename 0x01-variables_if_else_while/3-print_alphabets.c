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
	int x = 65;

	while (x < 123)
	{
		if (x > 64 && x < 91)
		{
			putchar(tolower(x));
			x++;
		}
		else if (x > 90 && x < 97)
		{
			x++;
			continue;
		}
		else
		{
			putchar(toupper(x));
			x++;
		}
	}
	putchar('\n');
	return (0);
}
