#include <stdio.h>
#include <string.h>
/**
* main - Entry point
* argc (Argument count) Length of the argument vector
* argv (Argument vector)Array of character pointers
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
char string[80];
strcpy(string, "Programming is like building a multilingual puzzle");
puts(string);
return (0);
}
