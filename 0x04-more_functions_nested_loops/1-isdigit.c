#include "main.h"

/***
 * _isdigit -Checks if c is a digit from 0 to 9
 * @c: Check the character
 * Return: 1 if a digit otherwise 0
 */
int _isdigit(int c)
{
if(c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
