#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - libera la lista
 * @head: puntero al principio e la lista
 *
 * Return: retorna a la libertad #tonodramatico
 */
void free_listint(listint_t *head)
{
	listint_t *sig;

	while (head != NULL)
	{
		sig = head->sig;
		free(head);
		head = sig;
	}
}
