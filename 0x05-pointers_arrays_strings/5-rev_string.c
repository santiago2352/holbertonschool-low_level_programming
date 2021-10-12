#include "main.h"

/**
 * rev_string - reverses a string
 * @s: chain to be reversed
 */
void rev_string(char *s)
{
	char save;
	int i, tst, tst1;

	tst = 0;
	tst1 = 0;

	while (s[tst] != '\0')
	{
		tst++;
	}

	tst1 = tst - 1;

	for (i = 0; i < tst / 2; i++)
	{
		save = s[i];
		s[i] = s[tst1];
		s[tst1--] = save;
	}
}
