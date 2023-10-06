#include "main.h"

/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	 int sum, n;

	for (n = 0; n < 1024; n++)
	{
	if (n % 3 == 0 || n % 5 == 0)
	sum = sum + n;
	}
	printf("%d", sum);
	printf('\n');
	return (0);
}
