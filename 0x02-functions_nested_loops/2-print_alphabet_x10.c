#include "holberton.h"
/**
 *print_alphabet_x10 - uses the print_alphabet func
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{int i  = 'a';
int r = 0;
while (r < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
r++;
_putchar('\n');
}
}
