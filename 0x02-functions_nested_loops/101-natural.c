#include <stdio.h>
/**
 * sum_multiples - sums all multiples of 3 or 5 below 1024
 *
 * Return: the sum of all multiples of 3 or 5
 */
int sum_multiples(void);
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{

if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
return (sum);
}

int main(void)
{
int sum = sum_multiples();

printf("%d\n", sum);

return (0);
}
