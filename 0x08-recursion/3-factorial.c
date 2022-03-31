#include "main.h"

/**
 * factorial - returns the factorial of a given num,ber
 * @n: the inpit integer
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
