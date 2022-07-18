#include "main.h"

/**
 * *_strchr - main function
 * @s: Pointer to the string
 * @c: a character to locate the string
 *
 * Description: This function locates a character in a string
 *
 * Return: a pointer to the first occurrence of the charater c
 * in the string s, or NULL if the character is not found
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
