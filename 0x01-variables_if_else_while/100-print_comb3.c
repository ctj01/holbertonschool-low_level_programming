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
while (i < 10)
{
while (j < 10)
{
if (j != i && j > i)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
j = 0;
}
putchar('\n');
return (0);
}
