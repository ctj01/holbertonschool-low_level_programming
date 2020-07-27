#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - check the code for Holberton School students.
 *@head : head of list
 *@n : data
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodo = NULL;
	listint_t *aux;

	newnodo = malloc(sizeof(listint_t));
	if (newnodo == NULL)
		return (newnodo);
	newnodo->n = n;
	newnodo->next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		*head = newnodo;
		return (newnodo);

	}
	while (aux->next)
	{
		aux = aux->next;
	}
	aux->next = newnodo;
	return (newnodo);

}
