#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet - uses the print_alphabet func
 *
 *Return: nothing
 */

void print_alphabet(void)
{int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
/**
 *main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
