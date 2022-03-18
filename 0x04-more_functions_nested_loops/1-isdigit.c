#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: An input integer
 * Return: 1 if c is a number, 0 otherwise
 */

int _isdigit(int c)
{
	int i = 0;
	int isdigit = 0;

	for (; i < 10; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
