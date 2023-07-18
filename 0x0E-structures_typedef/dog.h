#ifndef dog_H
#define dog_H
/**
 * struct dog - dog info
 * @name: the name of teh dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * init_dog - initialize a dog abject
 * @d: the dog object
 * @name: the name of teh dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - initialize a dog abject
 * @d: the dog object
 */
void print_dog(struct dog *d);
/**
 * dog_t - the new type of struct dog
 */
typedef struct dog dog_t;
/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - free memory
 * @d: the dog
 */
void free_dog(dog_t *d);
#endif
