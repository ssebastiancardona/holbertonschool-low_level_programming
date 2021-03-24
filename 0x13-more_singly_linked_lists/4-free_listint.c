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
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
