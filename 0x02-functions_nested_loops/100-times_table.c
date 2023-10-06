#include "main.h"

/**
 *print_times_table - main entry
 *@: prints the n times table, starting with 0.
 */

void print_times_table(int n)
{
	int i, m,  mult;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; ++i)
	{
	_putchar(48);
	for (m = 1; m <= n; ++m)
	{
	_putchar(',');
	_putchar(' ');
	mult = i * m;
	if (mult <= 9)
	{
	_putchar(' ');
	}
	if (mult <= 99)
	{
	_putchar(' ');
	}
	if (mult >= 100)
	{
	_putchar((mult / 100) + 48);
	_putchar((mult / 10) % 10);
	}
	else if (mult <= 99 && mult >= 10)
	_putchar((mult / 10) + 48);
	_putchar((mult % 10) + 48);
	}
	_putchar('\n');
	}
}

}
