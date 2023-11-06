#include <stdlib.h>
#include "dog.h"
/**
* _strlen - function that calculats the length of a string
* @s: string to evaluate
* Return: i
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* *_strcpy - function that copies string
* @dest: variable that contains the copied string
* @src: string to be copied
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;
len = _strlen(src);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - function that creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (Success), NULL (Failuer)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

