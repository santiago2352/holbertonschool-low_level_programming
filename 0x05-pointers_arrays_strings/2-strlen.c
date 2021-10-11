#include "main.h"
/**
 *_strlen-returns the length of the string
 *@s: string
 *Return: length of the chain
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
