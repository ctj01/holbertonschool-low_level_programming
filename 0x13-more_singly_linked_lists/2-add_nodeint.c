#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - check the code for Holberton School students.
 *@head : head of list
 *@n : data
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodo = NULL;

	newnodo = malloc(sizeof(listint_t));
	if (newnodo == NULL)
		return (newnodo);
	newnodo->n = n;
	newnodo->next = NULL;
	if (*head == NULL)
	{
		*head = newnodo;
		return (newnodo);

	}
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);

}
