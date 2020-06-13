#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
int j = 0;
int d = 1;
while (i < 10)
{
while (d < 10)
{
while (j < 10)
{
if (j != i && d != i && d != j && i != j  && j > i && d < j && i < d)
{
putchar(i + '0');
putchar(d + '0');
putchar(j + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
j++;
}
d++;
j = 0;
}
i++;
d = 1;
}
putchar('\n');
return (0);
}
