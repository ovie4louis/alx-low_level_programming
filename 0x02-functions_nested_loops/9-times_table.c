#include <stdio.h>
#include "main.h"

/**
 *times_table - nine time table
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	d = a * b;
	printf("%d", d);
	printf(",");
	printf("   ");
	}
	printf("\n");
	}
}
