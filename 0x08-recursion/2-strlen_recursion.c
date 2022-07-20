#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: returns the length of a string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0', ++i)

	{
		_strlen_recursion(s[i]);
		_putchar(*s);
	}
}
