#include "lists.h"
/**
 * free_dlistint- check the code for Holberton School students.
 * @head: arguments
 *  Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}

}
