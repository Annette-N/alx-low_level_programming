#include "main.h"

/**
 * puts2 - func that prints char of a string
 * @str: the used string reference
 * return: Always 0
 */
void puts2(char *str)
{
int z = 0;
while (str[z] != '\0')
{
if (z % 2 == 0)
{
putchar(str[z]);
}
z++;
}
putchar('\n');
}
