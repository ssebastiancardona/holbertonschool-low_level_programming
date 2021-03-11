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

/**
 * dog_t - nuevo tipo de estructura
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif /* _DOG_ */
