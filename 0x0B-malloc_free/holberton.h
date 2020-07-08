#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen_recursion(char *s);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);

#endif /* _HOLBERTON_H_ */
