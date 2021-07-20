#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - check the code for Holberton School students.
 *@d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (d->age <= 0)
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
