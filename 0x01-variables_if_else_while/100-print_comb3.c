#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 1;
int m = 1;
int r;
while (i < 69)
{
putchar(m / 10 + '0');
putchar(i % 10 + '0'); 
if (i < 68)
{
putchar(',');
putchar(' ');
}
i++;
m++;
}
putchar('\n');
return (0);
}