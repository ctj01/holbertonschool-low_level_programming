#include "holberton.h"
/**
 *jack_bauer - return values
 *
 * Return: nothing
 */

void jack_bauer(void)
{int h;
int m;
for (h = 0; h <= 9; h++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
for (m = 0; m < 60; m++)
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
m = 0;
}
}
