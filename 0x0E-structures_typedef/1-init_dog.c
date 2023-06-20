 /**
 *struct dog- the struct of a dog
 *init_dog- initializes a variable of type struct dog
 *@d: pointer to struct
 *@name: dog's name as parameter
 *@age: dog's age as parameter
 *@owner: pointer to string as dog owner
 *Return: void
 */

struct dog 
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{

int i = 0, j = 0;
d->age = age;
for( i = 0; name[i] != '\0'; i++)
{
d->name[i] = name[i];
i++;
}



for(j = 0; owner[j] != '\0'; j++)
{
d->owner[j] = owner[j];
j++;
}

}
