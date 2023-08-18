#include "main.h"

/**
 * print_line - fund draws a straight line in the terminal
 * @n: number of lines the character _ to be printed
 * Return: Void
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;
for (i = 1; i<=n; i++)
{
putchar('_');
}
putchar('\n');
}
}
