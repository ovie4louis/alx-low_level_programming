#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: checks for uppercase character
 *Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
