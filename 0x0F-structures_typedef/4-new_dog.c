#include "dog.h"
#include "holberton.h"
#include <stdlib.h>

/**
* len - strlen
* @str: string
* Return: length
*/

int len(char *str)
{
	int x = 0;

	for (x = 0; *(str + x); x++)
		;
	return (x);
}

/**
* _strcpy - copies src string to dest
* @dest: copy
* @src: original
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; x <= len(src); x++)
		dest[x] = src[x];
	return (dest);
}

/**
* new_dog - add new dog
* @name: name of dog
* @age: age of dog
* @owner: who cares for the dog
* Return: hot new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *goodboi;
	char *namecopy;
	char *owncopy;

	goodboi = malloc(sizeof(dog_t));

	if (goodboi == NULL)
		return (NULL);

	goodboi->age = age;

	if (name)
	{
		namecopy = malloc(len(name) + 1);
		if (namecopy == NULL)
		{
			free(goodboi);
			return (NULL);
		}
		goodboi->name = _strcpy(namecopy, name);
	}
	if (owner)
	{
		owncopy = malloc(len(owner) + 1);
		if (owncopy == NULL)
		{
			free(namecopy);
			free(goodboi);
			return (NULL);
		}
		goodboi->owner = _strcpy(owncopy, owner);
	}

	return (goodboi);

}
