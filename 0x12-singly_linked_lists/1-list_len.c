#include "lists.h"
#include <stdio.h>

/**
 * list_len - display elements in list
 *@h: list
 *Return: size list
 */

size_t list_len(const list_t *h)
{
	const list_t *aux;
	unsigned int i;

	aux = h;
	i = 0;
	while (aux)
	{
		if (aux->str == NULL)
			return (0);
		aux = aux->next;
		i++;
	}
	return (i);

}
