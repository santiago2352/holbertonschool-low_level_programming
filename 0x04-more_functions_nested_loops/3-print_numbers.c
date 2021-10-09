#include "main.h"
/**
 *print_numbers-prints from 0 to 9
 */
void print_numbers(void)
{
int nums = 0;

while (nums < 10)
{
_putchar(nums + '0');
nums++;
}
_putchar('\n');
}
