#include <stdio.h>
#include "main.h"

/**
 *times_table - nine time table
 */

void times_table(void)
{
	int i = 9;
	int j = 0;
	int multi;
	int k;

	for (k = 0; k <= 12; k++)
	{
	multi = i * j;
	printf("%d", multi);
	printf("\n");
	++j;
	}
}
