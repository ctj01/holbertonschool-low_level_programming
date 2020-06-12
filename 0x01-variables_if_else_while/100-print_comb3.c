#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
int m = 1;
while (i < 69 && m < 70)
{
if (m != i)
{
putchar(i / 10 + '0');
putchar(m % 10 + '0');
if (i < 69 && m < 69)
{
putchar(',');
putchar(' ');
}
}
i++;
m++;
}
putchar('\n');
return (0);
}
