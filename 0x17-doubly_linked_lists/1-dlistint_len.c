#include "lists.h"

/**
 *  dlistint_len - check the code for Holberton School students.
 * @h: arguments
 *  Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;

	if (node)
	{
		return (1 + dlistint_len(h->next));
	}

	return (0);
}
