#include <stdio.h>
/**
 *main - Start point
 *Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %s byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printrintf("Size of long long int: %lli byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
