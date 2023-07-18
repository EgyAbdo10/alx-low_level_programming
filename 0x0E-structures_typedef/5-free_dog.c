#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: the dog
 */
void free_dog(dog_t *d)
{
free(d);
}
