#include "main.h"

/**
 * _strlen - func that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longl = 0;
while (*s != '\0')
{
longl++;
s++;
}
return (longl);
}
