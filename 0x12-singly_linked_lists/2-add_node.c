#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - display elements in list
 *@h: list
 *Return: size list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *Newnodo = NULL;
	size_t i;

	if(head && str)
	{
		Newnodo = malloc(sizeof(list_t));
		if(Newnodo != NULL)
		{
			i = 0;

			while (str[i] != '\0')
				i++;
			Newnodo->len = i;
			Newnodo->str = strdup(str);
			Newnodo->next = *head;
			*head = Newnodo;
			return (*head);
		}
		free(Newnodo);

	}
	return (Newnodo);

}
