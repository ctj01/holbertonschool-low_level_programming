#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 *@head : head of list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *aux, *next;

	aux = head;
	while (aux)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
}
