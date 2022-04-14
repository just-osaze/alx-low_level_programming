#include "main.h"

/**
 * _islower - prints lower case character
 * Return: returns 1 if lower case and returns 0 if otherwise
 * @c: this is the variable to check for lower case
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
