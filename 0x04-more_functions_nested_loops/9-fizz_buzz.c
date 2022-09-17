#include <stdio.h>

/**
 * main - prints Fizz if divisble by 3
 * prints buzz if divisble by 5
 * prints FizzBuzz if divisble by 3 and 5
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("Buzz\n");

	return (0);
}
