#ifndef dog_h
#define dog_h

/**
 * struct dog - dogs info
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: A structure that contains dogs data
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
