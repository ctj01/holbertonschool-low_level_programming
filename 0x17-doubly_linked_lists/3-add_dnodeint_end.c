#include "lists.h"
/**
 * add_dnodeint_end - check the code for Holberton School students.
 * @head: arguments
 * @n: data
 *  Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *aux = NULL;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	aux = *head;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	if (aux->next)
	{
		aux = add_dnodeint_end(&(*head)->next, n);
	}
	aux->next = node;
	node->prev = aux;
	return (aux);
}
