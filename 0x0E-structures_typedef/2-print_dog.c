#include "dog.h"

/**
  *print_dog- prints a struct dog
  *@d: pointer to struct
  *Return: nothing
  */

void print_dog(struct dog *d)
{

if (d == NULL)
{
printf(" ");
return;
}

else
{
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s", d->name);
printf("\n");

if (d->age < 0)
printf("Age: (nil)");

else
printf("Age: %f", d->age);
printf("\n");

if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s", d->owner);
printf("\n");
}
}
