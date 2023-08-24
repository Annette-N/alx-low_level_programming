#include "main.h"

/**
 * _strncpy - Copys a string from src to dest
 * @dest: The string to be appended to
 * @src: The string to be appended to dest
 *
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
if (src[i] == '\0')
{
dest[i] = src[i];
break;
}
putchar('\n');
return (dest);
}
