#include "lists.h"
/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: arguments
 * @index: data
 *  Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int d = 0;
	dlistint_t *aux = NULL;

	if (head == NULL)
		return (NULL);
	aux = head;
	if (d == index && aux)
	{
		return (aux);

	}
       	if (aux->next)
	{
		aux = get_dnodeint_at_index(head->next, index - 1);
	}
	return (aux);

}
