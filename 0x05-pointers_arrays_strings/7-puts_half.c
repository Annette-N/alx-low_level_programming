#include "main.h"

/**
 * puts_half - func that prints half the string
 * @str: it is the input string
 */
void puts_half(char *str)
{
int full_string, half_string;
full_string = 0;
while (str[full_string] != '\0')
full_string++;
half_string = full_string / 2;
if (full_string % 2 == 1)
half_string++;
while (half_string < full_string)
{
putchar(str[half_string]);
half_string++;
}
putchar('\n');
}
