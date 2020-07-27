#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  listint_len - check the code for Holberton School students.
 * @h : head
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *aux = h;
	size_t i = 0;

	while (aux)
	{
		aux = aux->next;
		i++;

	}
	return (i);
}
