#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - initialize a dog abject
 * @d: the dog object
 */
void print_dog(struct dog *d)
{
if (d == NULL)
exit(98);
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age == 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
