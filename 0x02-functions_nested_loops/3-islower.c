#include "holberton.h"
/**
 *_islower - print 1 if is lower and 0 if c is other wise
 *@c: is a parameter
 * Return: nothing
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
