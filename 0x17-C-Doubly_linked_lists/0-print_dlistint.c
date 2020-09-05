#include "lists.h"

/**
 *  print_dlistint - check the code for Holberton School students.
 * @h: arguments
 *  Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;

	if (node)
	{
		printf("%d\n", node->n);
		return (print_dlistint(h->next));
	}

	return (0);
}
