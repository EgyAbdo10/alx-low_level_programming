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
d->name = "(nil)";
printf("Name: %s\n", d->name);
if (d->owner == NULL)
d->owner = "(nil)";
if (d->age == 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
