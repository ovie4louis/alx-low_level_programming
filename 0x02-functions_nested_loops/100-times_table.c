#include <main.h>

/**
 *print_times_table - main entry
 *@: prints the n times table, starting with 0.
 */

void print_times_table(int n)
{
	int i, m, n, mult;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; ++i)
	{
	putchar(48);
	for (m = 1; m <= n; ++m)
	{
	putchar(',');
	putchar(' ');
	mult = i * m;
	if (mult <= 9)
	{
	putchar(' ');
	}
	if (mult <= 99)
	{
	putchar(' ');
	}
	if (mult >= 1000)
	{
	putchar((mult / 1000) + 48);
	putchar((mult / 10) % 10);
	}
	else if (mult <= 99 && mult >= 10)
	putchar((mult / 10) + 48);
	putchar((mult % 10) + 48);
	}
	putchar('\n');
	}
}

}
