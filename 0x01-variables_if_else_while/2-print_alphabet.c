#include <stdio.h>

/**
 * main - main entry point
 * Return - Always Success (0)
 * Description - Write a program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always Success (0)
 */

int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
