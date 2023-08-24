#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest : the string where to add the second dtring
 * @src : the second string that will be addede to the first string
 *
 * Return: dest Always
*/

char *_strncat(char *dest, char *src, int n)
{
        int i, j, k;

        for (i = 0 ; dest[i] != '\0' ; i++)
                ;
        for (j = 0 ; src[j] != '\0'; j++)
                ;
        n = i + j;
        j = 0;
        dest[i - 1] = ' ';

        for (k = i ; k < n ; k++)
        {
                dest[k] = src[j];
                j++;
        }
        return (dest);
}
