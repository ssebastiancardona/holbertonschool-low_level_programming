#ifndef _DOG_
#define _DOG_
/**
 * struct dog - listado de pulgas
 * @name: nombre del bb
 * @age: edad del bb
 * @owner: dueño del bb
 *
 * Return: nadita
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_ */
