#include <stdio.h>
/**
 * _strl[en - returns the lengtgh of a string
 * @str: string to get th lrngth of
 * Return: the length  of @str
 */
size_t _strlen(const char *str)
{
        size_t length = 0;

        while (*str++)
        length++;
        return (length);
}
