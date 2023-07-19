#include "main.h"

/**
 * _abs - Computes the absolute value of an intiger
 * @c: the number to be computedd
 * Return: Absolute value of number or zero
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
