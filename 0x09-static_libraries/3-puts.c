#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
