#include "main.h"
#include <stdio.h>
/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 *
 * Return: void
 */
void print_fibonacci(void)
{
int i;
long fib[50] = {1, 2};

for (i = 2; i < 50; i++)
fib[i] = fib[i - 1] + fib[i - 2];

for (i = 0; i < 49; i++)
printf("%ld, ", fib[i]);

printf("%ld\n", fib[49]);
}
