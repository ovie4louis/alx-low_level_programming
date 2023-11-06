#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - prints all the data of a dog
 *@d: a dog structure
 *Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	d->name = "(NULL)";
	if (d->owner == NULL)
	d->owner = "(NULL)";
	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
