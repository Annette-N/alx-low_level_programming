#include "main.h"

/**
 * print_square - functions that prints a square
 * @size: size of a square
 * Description: Can only use putchar to print. use '#' to print
 *
 */
void print_square(int size)
{
int x, y;
y =0;
if (size < 1)
putchar('\n');
while (y < size)
{
x = 0;
while (x < size)
{
putchar('0');
x++;
}
putchar('\n');
y++;
}
}
