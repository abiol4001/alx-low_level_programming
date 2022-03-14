#include <stdio.h>

/**
 * main - print all the number of base 16
 * followed by new line
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
			putchar('i');
	}
	putchar('\n');
	return (0);
}

