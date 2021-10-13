#include "main.h"

/**
 * puts2 - prints one char out 2 by 2 
 * @str: chain to be printed
 */
void puts2(char *str)
{
	int ch, i;

	ch = 0;

	while (str[ch] != '\0')
	{
		ch++;
	}

	for (i = 0; i < ch; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
