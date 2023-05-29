#include <stdio.h>

/**
 *_strlen - the function that returns the length of a string.
 *@str:string to be return
 *Return:length
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
