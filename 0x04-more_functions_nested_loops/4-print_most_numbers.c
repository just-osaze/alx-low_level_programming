#include "main.h"

/**
  * print_most_numbers - print numbers 1 - 9 excluding 2 & 4
  * return: void
  */

void print_most_numbers(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    if (i != 2 && i != 4)
    {
      _putchar(i);
    }
  }

  _putchar('\n');
}