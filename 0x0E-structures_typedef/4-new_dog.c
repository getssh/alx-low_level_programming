#include "dog.h"
/**
  * new_dog - new elements in dtruct
  * @name: name of dog
  * @age: age of dog
  * @owner: of the dog
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new;

        new = malloc(sizeof(dog_t));
        if (new == NULL)
        {
                return (new);
        }

        new->name = malloc(sizeof(name) + 1);
        if (new->name == NULL)
        {
                free(new);
                return (NULL);
        }

        new->owner = malloc(sizeof(owner) + 1);
        if (new->owner == NULL)
        {
                free(new->name);
                free(new);
                return (NULL);
        }
        cpy(new->name, name);
        new->age = age;
        cpy(new->owner, owner);
        return (new);
}
