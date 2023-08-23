#include "main.h"

/**
 * print_rev - func that prints a string in reverse
 * @str: prints the string
 */
void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
putchar(s[start]);
putchar('\n');
}
