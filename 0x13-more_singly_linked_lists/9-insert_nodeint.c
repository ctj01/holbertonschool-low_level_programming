#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - check the code for Holberton School students.
 *@head : head of list
 *@idx : index
 *@n : data
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = NULL;
	listint_t *newnodo = NULL;
	unsigned int posicion = 0;


	if (head)
	{
		newnodo = malloc(sizeof(listint_t));
		if (newnodo == NULL)
			return (newnodo);
		newnodo->n = n;
		newnodo->next = NULL;

		if (idx == 0)
		{
			newnodo->next = *head;
			*head = newnodo;
			return (newnodo);
		}

		aux = *head;
		while (posicion < (idx - 1) && aux->next)
		{
			posicion++;
			aux = aux->next;
			if (aux == NULL)
			{
				free(newnodo);
				return(NULL);
			}
		}
		if (posicion == idx)
		{

			newnodo->next = aux->next;
			aux->next = newnodo;
			return (newnodo);
		}

	}
	return (aux);
}
