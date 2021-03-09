#include "dog.h"
/**
 * init_dog - Agrega informacion a la lista
 *
 * @d: Datos de la estructura
 * @name: Nombre del bb
 * @age: Edad del bb
 * @owner: Dueño del bb
 * Return: Nadita
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
