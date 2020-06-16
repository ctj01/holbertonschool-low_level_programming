#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 *_islower - print 1 if is lower and 0 if c is other wise
 *@c: is a parameter
 * Return: nothing
 */
int _islower(int c)
{
if (islower(c))
printf("1");
else
printf("0");
}
/**
 *main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
r = _islower('H');
r = _islower('o');
r = _islower(108);
putchar('\n');
return (0);
}
