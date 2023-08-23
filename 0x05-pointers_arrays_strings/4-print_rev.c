#include "main.h"

/**
 * print_rev - func that prints a string in reverse
 * @str: prints the string
 */
void print_rev(char *s)
{
int longl = 0;
int o;
while (*s != 0)
{
longl++;
s++;
}
s--;
for (o = longl; o > 0; o++)
{
putchar(*s);
s--;
}
putchar('\n');
}
