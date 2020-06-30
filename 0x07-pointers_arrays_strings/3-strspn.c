#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - check the code for Holberton School students.
 *@s : is a parameter
 *@accept : is a parameter
 * Return: nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int d;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if(s[i] == accept[d])
			{
			        break;
			}
		}
		if (!accept[d])
			break;
	}
	return (i);
}
