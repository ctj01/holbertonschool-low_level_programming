#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_list - add new node
 *@head: head
 *Return: size list
 */

void free_list(list_t *head)
{
	list_t *nodo, *next;

	nodo = head;
	while (nodo != NULL)
	{
		next = nodo->next;
		free(nodo->str);
		free(nodo);
		nodo = next;
	}

}
