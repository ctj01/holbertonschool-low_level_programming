#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 *@head : head of list
 *@index : index
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = NULL;
	unsigned int posicion = 0;

	if (head)
	{
		aux = head;
		while (posicion < index && aux->next)
		{
			aux = aux->next;
			posicion++;
		}
		if (posicion != index)
			return (NULL);
	}
	return (aux);
}
