#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for lowercase character. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
