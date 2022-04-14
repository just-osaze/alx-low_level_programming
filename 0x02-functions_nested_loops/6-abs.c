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
		return(x);
	}
	else if (x < 0)
	{
		return(x * -1);
	}
}
