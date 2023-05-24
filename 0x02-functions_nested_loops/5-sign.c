#include "main.h"
/**
 *print_sign -  function that prints the sign of a number
 *@n: prints the sign of a number
 *Return: if n>0 print +1, n<0 print -1 and n=0 print 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{_putchar(48);
		return (0);
	}
}
