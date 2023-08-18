#include "main.h"

/**
 * more_numbers - prints the numbers (0 to 14) 10 times
 * followed by a new line
 * Return: Void
 */
void more_numbers(void)
{
int i , j;
for (i=0; i < 10; i++)
{
for (j =0 ; j < 15; j++)
{
if (j >= 10)
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
