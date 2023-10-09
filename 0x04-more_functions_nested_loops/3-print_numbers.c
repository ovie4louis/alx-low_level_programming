#include "main.h"
#include <stdio.h>

/**
 *print_numbers - print 0-9
 *Return: void
 */

void print_numbers(void)
{
	int num = 0;
	do {
	_putchar(num + 48);
	num++;
	}
	while (num >= 0 && num <= 9);
	_putchar('\n');
}
