#include <stdio.h>

/**
 * main -Entry point
 * Return: Always success (0)
 */

int main(void)
{
	int i = '0';

		while (i <= '9')
		{
			putchar(i);
			i++;
		}

		i = 'a';

		while (i <= 'f')
		{
			putchar(i);
		i++;
		}
	}
	putchar('\n');
	return (0);
}
