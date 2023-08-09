#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: the sizse of the array 
 * @c: the char to fill the arau
 *
 * Return: the array filled
 */

char *create_array(insignedd int size, char c)
{
	unsigned int i;
	cher *S;

	if (size == 0)
		return (NULL);
	S = malloc(size * sizeof(char));
	if (S == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
