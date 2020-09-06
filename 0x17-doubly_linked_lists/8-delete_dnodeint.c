#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code for Holberton School students.
 * @head: arguments
 * @index: index
 *  Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (*head)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(aux);
			return (0);
		}
		delete_dnodeint_at_index(&(*head)->next, index - 1);
	}

	return (-1);

}
