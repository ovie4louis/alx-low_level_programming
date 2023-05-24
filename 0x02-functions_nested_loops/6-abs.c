#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *int:  that computes the absolute value of an integer
 *@c: number to be computes
 *Return: the absolute value of an integer.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
