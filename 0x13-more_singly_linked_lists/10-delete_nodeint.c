#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 *@head : head of list
 *@index: index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *nodoeliminado;
	unsigned int posicion = 0;

	if (*head)
	{
		aux = *head;
		if (index == 0)
		{
			*head = aux->next;
			free(aux);
			return (1);
		}
		while (posicion < (index - 1))
		{
			aux = aux->next;
			posicion++;
			if (aux == NULL)
				return (-1);
		}
		nodoeliminado = aux->next;
		aux->next = nodoeliminado->next;
		free(nodoeliminado);
		return (1);
	}
	return (-1);

}
