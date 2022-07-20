#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: random number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt_recursion - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
