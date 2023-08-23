#include "main.h"

/**
 * _puts - func that printsa string
 * @str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
