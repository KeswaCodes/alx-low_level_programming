#include "dog.h"
#include <stdlib.h>

/**
 *new_dog- creates a new dog
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 *Return: pointer to new dog (success), or NULL (fail)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

int name_index = 0, owner_index = 0, i = 0, j = 0;
dog_t *dog;
dog = malloc(sizeof(dog_t));

for (i = 0; name[i] != '\0'; i++)
;

for (j = 0; owner[j] != '\0'; j++)
;

dog->name = malloc(sizeof(char) * i);
if (dog->name == NULL)
return (NULL);
else
while (name[name_index] != '\0')
{
dog->name[name_index] = name[name_index];
name_index++;
}

dog->owner = malloc(sizeof(char) * j);

if (dog->owner == NULL)
return (NULL);

else
while (owner[owner_index] != '\0')
{
dog->owner[owner_index] = owner[owner_index];
owner_index++;
}
dog->age = age;



return (dog);
}