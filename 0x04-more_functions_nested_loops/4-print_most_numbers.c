#include "main.h"
/**
 * print_most_numbers - checks for a digit( 0 to 9) except 2 and 4
 * Return: Void
 */
void print_most_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
{
if (c !=50)
{
if (c != 52)
{
putchar(c);
}
}
}
putchar('\n');
}
