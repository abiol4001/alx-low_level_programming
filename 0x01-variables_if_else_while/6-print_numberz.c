#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * you can only use putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
