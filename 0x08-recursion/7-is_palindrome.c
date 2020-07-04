#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s != '\0')
	{
		z =  _strlen_recursion(++s);
		z++;
	}
	return (z);

}

/**
 *_Ispalindrome - check the code for Holberton School students.
 *@i : is a parameter
 *@z : is parameter
 *@s : is parameter
 * Return: nothing.
 */
int _Ispalindrome(int i, int z, char *s)
{
	int palindrome = 0;

	if (i >= z)
	{
		palindrome = 1;
	}

	if (s[i] == s[z])
		palindrome = _Ispalindrome(i + 1, z - 1, s);
	else
		palindrome = palindrome;
	return (palindrome);



}

/**
 * is_palindrome - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

int is_palindrome(char *s)
{
	int z = 0;

	z = _strlen_recursion(s) - 1;
	return (_Ispalindrome(0, z, s));

}
