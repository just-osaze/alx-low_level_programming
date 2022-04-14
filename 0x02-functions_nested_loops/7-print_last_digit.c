#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: returns the value of tha last digit
 * @n: variable
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
