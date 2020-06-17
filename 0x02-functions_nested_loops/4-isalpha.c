#include "holberton.h"
/**
 *_isalpha - print 1 if is lower or uppercase and 0 if c is other wise
 *@c: is a parameter
 * Return: nothing
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
