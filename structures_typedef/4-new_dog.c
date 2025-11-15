#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;
    return (i);
}

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    int len_name, len_owner;

    if (name == NULL || owner == NULL)
        return (NULL);

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    len_name = _strlen(name);
    len_owner = _strlen(owner);

    d->name = malloc(len_name + 1);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    d->owner = malloc(len_owner + 1);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    _strcpy(d->name, name);
    _strcpy(d->owner, owner);
    d->age = age;

    return (d);
}
