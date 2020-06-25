#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_atoi - check the code for Holberton School students.
 *@s: is a parameter
 * Return: result
 */

int _atoi(char *s)
{
int i = 0;
int n = 0;
int d = 1;
i = n = 0;

while (s[i] < '0' || s[i] > '9')
{

	if (s[i] == '-')
	{
		d = d * -1;
	}
	i++;

}
while (s[i] >= '0' && s[i] <= '9')
{
	if (n >= 0)
	{
		n = n * 10 - (s[i] - '0');
		i++;
	}
	else
	{
		n = n * 10 - (s[i] - '0');
		i++;
	}


}

d = d * -1;
return (n * d);

}
