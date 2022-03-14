#include <stdio.h>

/**
 * main - a program that prints alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
