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

	if (d == index && head)
	{
		return (head);

	}
	return (head = get_dnodeint_at_index(head->next, index - 1));

}
