#include <stdio.h>

/**
 * main - prints all the sum of miltiple of 3 and 5
 * below 1024
 *
 * Return: Always0 (Success).
 */

int main(void)
{
	int x = 1024, y, sum = 0;

	for (y = 0; y < x; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum += y;
		}
	}
	printf("%d", sum);

	return (0);
}
