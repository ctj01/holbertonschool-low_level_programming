#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - check the code for Holberton School students.
 *@head : head of list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = NULL;
	int n  = 0;

	if (head)
	{
		aux = head;
		while (aux)
		{
			n += aux->n;
			aux = aux->next;
		}
	}
	return (n);
}
