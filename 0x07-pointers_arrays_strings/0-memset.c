#include "main.h"

/**
 * *_memset - func fills first n bytes of memory pointed to by s with the constant byte b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        return (s);
}
