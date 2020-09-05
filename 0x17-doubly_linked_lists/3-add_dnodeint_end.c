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
	if (!node || head)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL
		return (node);
	}
	*head->next = node;
	node->prev = *head;
	(*head)->next = add_dnodeint_end(&(*head)->next, n);
	return (*head);
}
