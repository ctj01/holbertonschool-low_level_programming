#include <unistd.h>
#include <stdio.h>
int _putchar(int c)
{
return (write(1, &c, 1));
}
void print_alphabet(void)
{int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
