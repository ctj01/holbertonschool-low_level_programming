#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int d = 0;
	if (d == index)
	{
		return (head);

	}
	return (get_dnodeint_at_index(head->next, index- 1));

}
