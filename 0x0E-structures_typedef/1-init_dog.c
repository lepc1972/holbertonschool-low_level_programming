#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: point to struct dog
 * @name: char name struct dog
 * @age: int to see dog age
 * @owner: char to see owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
