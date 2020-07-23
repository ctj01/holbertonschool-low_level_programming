#include "lists.h"
#include <stdio.h>

/**
 *print_list - display elements in list
 *@h: list
 *Return: size list
 */

size_t print_list(const list_t *h)
{
	const list_t *aux;
	unsigned int i;

	aux = h;
	i = 0;
	while (aux)
	{
		if (aux->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", aux->len, aux->str);
		aux = aux->next;
		i++;
	}
	return (i);

}
