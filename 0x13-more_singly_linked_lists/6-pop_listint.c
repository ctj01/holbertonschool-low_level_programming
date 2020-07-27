#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 *@head : head of list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *nodoeliminado;
	int n = 0;

	if (head)
	{
		nodoeliminado = *head;
		*head = nodoeliminado->next;
		n = nodoeliminado->n;
		free(nodoeliminado);
		return (n);
	}
	return (0);
}
