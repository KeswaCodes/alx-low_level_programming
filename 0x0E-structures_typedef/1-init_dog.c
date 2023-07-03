#include "dog.h"
  /**
 *init_dog- initializes a variable of type struct dog
 *@d: pointer to struct
 *@name: dog's name as parameter
 *@age: dog's age as parameter
 *@owner: pointer to string as dog owner
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;

}
