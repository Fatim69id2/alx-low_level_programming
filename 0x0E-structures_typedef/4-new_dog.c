#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < n; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < o; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
