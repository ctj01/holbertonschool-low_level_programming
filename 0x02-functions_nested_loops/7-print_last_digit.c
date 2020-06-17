#include "holberton.h"
/**
 *print_last_digit - return values
 *@d: is a parameter
 * Return: nothing
 */

int print_last_digit(int d)
{
int num = 0;  
if (d < 0)
{
d = d * -1;
}
num = d % 10;
_putchar(num + '0');
return (num);
}
