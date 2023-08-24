#include "main.h"

/**
 * _strcpy - Copys a string from src to dest
 * @dest: The string to be appended to
 * @src: The string to be appended to dest
 *
 * Return: A pointer to the resulting string
 */
char *_strcpy(char *dest, char *src, int n)
{

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
putchar('\n');
return (dest);
}
