#include <stdio.h>

/**
 * _strcpy - Concatenate two strings
 * @dest: The string to be appended to
 * @src: The string to be appended to dest
 *
 * Return: A pointer to the resulting string
 */
char *_strcpy(char *dest, char *src)
{
        int dest_length = 0;
        int i = 0;

        while (dest[dest_length] != '\0')
                dest_length++;
        printf("dest_length = %d\n", dest_length);
        while (src[i] != '\0')
        {
                dest[dest_length] = src[i];
                i++;
                dest_length++;
        }
        dest[dest_length] = '\0';
        return (dest);
}
