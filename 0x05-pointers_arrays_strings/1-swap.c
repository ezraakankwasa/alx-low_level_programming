#include "main.h"

/**
 * swap_int - swap varible values
 * @a: Address of variable to be swapped
 * @b: Address of variable to be swapped
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
