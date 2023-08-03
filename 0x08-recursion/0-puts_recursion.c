#include "main.h"

/**
 * _puts_recursion - prints astring folowed by a neww line
 * @S: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *S)
{
	if (*S == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*S);
	S++;
	 _puts_recursion(S);
}
