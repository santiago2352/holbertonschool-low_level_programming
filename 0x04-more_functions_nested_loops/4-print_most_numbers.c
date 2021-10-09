#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4
 */
void print_most_numbers(void)
{
int nums;

for (nums = 0; nums < 10; nums++)
{
if (nums != 2 && nums != 4)
{
_putchar(nums + '0');
}
}

_putchar('\n');
}
