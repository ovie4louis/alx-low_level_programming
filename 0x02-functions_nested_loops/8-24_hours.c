#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - entry point
 *Return : void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (c = 0; c <= 2; c++)
	{
	for (d = 0; d <= 4; d++)
	{
	for (a = 0; a <= 5; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if (a >= 2 && d >= 4)
	break;
	putchar(c + 48);
	putchar(d + 48);
	putchar(58);
	putchar(a + 48);
	putchar(b + 48);
	putchar('\n');
	}
	}
	}
	}
	}
