#include <stdio.h>

/**
 * swap_int - this swaps the value of two intigers
 * @a: number one intiger to be swapped
 * @b: number two intiger to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
