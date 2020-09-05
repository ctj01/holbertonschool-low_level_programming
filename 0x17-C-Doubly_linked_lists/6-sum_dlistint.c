#include "lists.h"
/**
 * sum_dlistint- check the code for Holberton School students.
 * @head: arguments
 *  Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		return (head->n +=  sum_dlistint(head->next));
	}
	return (0);

}
