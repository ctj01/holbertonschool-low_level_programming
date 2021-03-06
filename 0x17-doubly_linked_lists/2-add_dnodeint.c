#include "lists.h"

/**
 *  add_dnodeint - check the code for Holberton School students.
 * @head: arguments
 * @n: data
 *  Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	if ((*head) == NULL)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (*head);
}
