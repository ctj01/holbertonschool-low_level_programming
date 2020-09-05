#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		return (head->n +=  sum_dlistint(head->next));
	}
	return(0);

}
