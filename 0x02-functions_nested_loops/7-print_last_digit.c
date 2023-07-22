#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number.
 *
 *@n: input  number as an integer.
 *
 *Return : value of the last digit
 */
int print_last_digit(int n)
{
	int last;
	int n;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
