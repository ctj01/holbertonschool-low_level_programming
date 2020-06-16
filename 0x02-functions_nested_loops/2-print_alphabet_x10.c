#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet_x10 - uses the print_alphabet func
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{int i;
int r = 0;
while (r < 11)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
r++;
putchar('\n'); 
}
}
/**
 *main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
