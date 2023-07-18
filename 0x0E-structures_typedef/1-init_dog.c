#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a dog abject
 * @d: the dog object
 * @name: the name of teh dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
(*d).owner = owner;
}
