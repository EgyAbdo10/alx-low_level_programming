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
#endif
