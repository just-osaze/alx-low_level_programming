#include <stdio.h>
/**
 * main - Entry point
 * Return: Always success (0)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);
}
