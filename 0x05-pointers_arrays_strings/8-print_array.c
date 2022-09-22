#include "main.h"

/**
 * print_array - prints array
 * @a: pointer to array
 * @n: number of items to printed out.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
		i += 1;
	}

	printf("\n");
}
