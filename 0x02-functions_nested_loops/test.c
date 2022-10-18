#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	while(i < 24)
	{
		putchar(i + "0");
		putchar(58);
		while (j < 60)
		{
			putchar(j + "0");
			j++;
		}
		i++;
	}
}
