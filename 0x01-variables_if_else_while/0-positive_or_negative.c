#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = rand()- RAND_MAX / 2;
if (n == 0)
{
printf("0 is zero/n");
}
else if (n > 0)
{
printf("%d%s", n, " is positive/n");
}
else
{
printf("%d%s", n, " is negative");
}
return (0);
}
