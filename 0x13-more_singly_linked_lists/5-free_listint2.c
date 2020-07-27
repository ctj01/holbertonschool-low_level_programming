#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - check the code for Holberton School students.
 *@head : head of list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux, *next;

	aux = *head;
	while (aux)
	{
		next = aux;
		aux = next->next;
		free(next);
	}
}
