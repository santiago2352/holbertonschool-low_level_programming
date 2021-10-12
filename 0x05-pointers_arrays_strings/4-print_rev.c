#include "main.h"
/**
 *print_rev-prints the string upside down
 *@s:chain.
 */
void print_rev(char *s)
{
	int var;

	int chain;

	int var2;

	for (var = 0; s[var] != '\0'; var++)
	{
	}

	chain = var;

	var2 = chain - 1;

	while (var2 >= 0)
	{
		_putchar(s[var2]);
		var2--;
	}
	_putchar('\n');
}
