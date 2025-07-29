#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strdup - creates a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the new string (malloc'ed), or NULL if it fails
 */

char *_strdup(const char *str)
{
    unsigned int length, i;
    char *strCopy;

    if (str == NULL)
        return (NULL);

    length = _strlen(str);

    strCopy = malloc(sizeof(char) * (length + 1));
    if (strCopy == NULL)
        return (NULL);

    for (i = 0; i < length; i++)
        strCopy[i] = str[i];

    strCopy[i] = '\0';
    return (strCopy);
}
