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
int n;
char i;
for (n = 48; n < 58; n++)
putchar(n);
for (i = 'a'; i < 'g'; i++)
putchar(i);
putchar('\n');
return (0);
}
