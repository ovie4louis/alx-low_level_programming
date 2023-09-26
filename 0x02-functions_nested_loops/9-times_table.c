#include <stdio.h>
#include "main.h"

/**
 *times_table - nine time table
 *Return: void
 */

void times_table(void)
{
	int i = 9;
	int j = 0;
	int multi;

	for (int k = 0; k <= 12; k++)
	{
	multi = i * j;
	printf("%d", multi);
	printf("\n");
	++j;
	return (0);
	}
}
