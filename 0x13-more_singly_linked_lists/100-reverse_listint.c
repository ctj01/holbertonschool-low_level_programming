#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code for Holberton School students.
 *@head : head of list
 * Return: Always 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_after, *node_before = NULL;

	while (*head)
	{
		node_after = (*head)->next;
		(*head)->next = node_before;
		node_before = *head;
		*head = node_after;
	}
	*head = node_before;
	return (*head);
}
