#include <stdio.h>

/**
 * main - print the alphabet in lowercase, then
 * in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char ch1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		putchar(ch1);
	}

		putchar('\n');
		return (0);
}
