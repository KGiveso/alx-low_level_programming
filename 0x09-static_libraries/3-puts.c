#include <stdio.h>
/**
* _puts - Prints a string to stdout followed by a newline character
* @str: The string to print
*
* Return: None
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
