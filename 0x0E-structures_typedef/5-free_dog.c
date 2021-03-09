#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - liberador de pulgas
 * @d: puntero para liberar
 *
 * Return: nadita
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
