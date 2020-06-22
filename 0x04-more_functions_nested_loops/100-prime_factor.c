#include <stdio.h>
#include <math.h>
/**
 *main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i;
	long int N = 612852475143;
	long int longnumber;

for (i = 2; i < N; i += 3)
{
if (i % 2 != 0)
{
if (N % i == 0)
{
if (i > longnumber && longnumber != 0)
{
printf("%ld\n", i);
break;
}
longnumber = i;
}
}
}
	return (0);
}
