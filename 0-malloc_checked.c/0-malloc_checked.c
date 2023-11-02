#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc andexit if failed
 * @b: int
 * Return: pointer to the array intializes or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
	exit(90);
	return (m);
}
