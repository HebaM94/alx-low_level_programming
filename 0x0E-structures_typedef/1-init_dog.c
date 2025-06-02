#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog
* @name: name of the dog to initialize
* @age: age of dog to initialize
* @owner: owner of the dog to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)      //not pointing to any memory yet
d = malloc(sizeof(struct dog));     //any pointer must be assigned a memory size first
d->name = name;     //derefernece and access
d->age = age;
d->owner = owner;
}

