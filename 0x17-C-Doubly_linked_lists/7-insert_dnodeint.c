#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	if(!newnode)
		return(NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if( idx == 0 || *h == NULL)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		(*h) = newnode;
		return (*h);
	}
	else
	{
		free(newnode);
	}
	(*h)->next = insert_dnodeint_at_index(&(*h)->next, idx-1, n);

	return (*h);
}
