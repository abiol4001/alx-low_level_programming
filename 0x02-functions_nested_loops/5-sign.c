#include "main.h"

/**
 * print_sign - prints the sign of a number to know if 
 * it's a positive number or otherwise.
 *
 * @n: The inout number as an integer.
 *
 * Return: 1 is greater than 0. 0 is zero. -1 is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else 
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
