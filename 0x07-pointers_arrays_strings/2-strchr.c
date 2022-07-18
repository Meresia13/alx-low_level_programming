#include "main.h"

/**
 * _strchr - main function
 * @s: Pointer to the string
 * @c: a character to locate the string
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
