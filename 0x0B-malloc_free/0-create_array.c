#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the sizse of the array 
 * @c: the char to fill the arau
 *
 * Return: the array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *S;

	if (size == 0)
		return (NULL);
	S = malloc(size * sizeof(char));
	if (S == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		S[i] = c;
	}
	return (S);
}
