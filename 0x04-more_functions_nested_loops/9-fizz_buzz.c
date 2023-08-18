#include <stdio.h>

/**
*main - fund prints the numbers 1-100, but for multiples of three and five
*Fizz is printed instead of 3 and is multiples
*Buzz is printed instead of 5  and its multiples
*FizzBuzz is printed instead of the muliples of 3 and 5
*Return: Always 0
*/
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num & 3) == 0 && (num %5) == 0)
printf("FizzBuzz");
else if ((num % 3) == 0)
printf("Fizz");
else if ((num %5) ==0)
printf("Buzz");
else
printf("%d",num);
if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
