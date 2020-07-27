#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *@h : head
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *aux = h;
	size_t i = 0;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		i++;

	}
	return (i);
}
