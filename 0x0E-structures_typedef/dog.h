#ifndef MAIN
#define MAIN
/**
 * struct dog - attributes of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Deacription: attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
#endif
