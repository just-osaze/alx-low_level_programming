#include "main.h"

/**
 * _isupper - checks if a letter is upper case character
 * Return: returns 1 if upper case and returns 0 if otherwise
 * @c: this is the variable to check for upper case
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		return (0);

	_putchar('\n');
}
