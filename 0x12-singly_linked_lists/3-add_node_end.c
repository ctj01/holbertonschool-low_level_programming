#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - add new node
 *@head: head
 *@str : string to copy
 *Return: size list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Newnodo = NULL;
	list_t *aux;
	size_t i;

	if (str)
	{
		Newnodo = malloc(sizeof(list_t));
		if (Newnodo != NULL)
		{
			i = 0;
			while (str[i] != '\0')
				i++;
			aux = *head;
			Newnodo->len = i;
			Newnodo->str = strdup(str);
			Newnodo->next = NULL;
			if (*head == NULL)
			{
				*head = Newnodo;
				return (Newnodo);
			}
			while (aux->next)
			{
				aux = aux->next;
			}
			aux->next = Newnodo;
		}
	}


	return (Newnodo);

}
