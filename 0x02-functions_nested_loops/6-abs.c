#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: return absolute value of x
 * @x: variable
 *
 */

int _abs(int x)
{
	if (x >= 0)
	{
		_putchar(x);
	}
	else if (x < 0)
	{
		_putchar(x * -1);
	}

	return (x);
}
