#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Descrption: prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}