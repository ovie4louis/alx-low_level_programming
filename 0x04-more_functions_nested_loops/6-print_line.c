#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: number of timesthe character should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for (i = 1; i <= n; i++)
		{_putchar(',');
		}
		_putchar('\n');
	}
}
