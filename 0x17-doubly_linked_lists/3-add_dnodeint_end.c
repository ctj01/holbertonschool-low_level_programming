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

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!*head)
	{
		node->prev = *head;
		*head = node;
		node->next = NULL;
		return (node);
	}
	(*head)->next = add_dnodeint_end(&(*head)->next, n);
	return (*head);
}
