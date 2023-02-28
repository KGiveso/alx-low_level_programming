#include "main.h"
/**
* puts2 - prints every other character of a string
* starting with the first one
* @str: input string
*/
void puts2(char *str)
{
int len = 0;
char *y = str;
int o;
while (*y != '\0')
{
y++;
len++;
}
for (o = 0; o < len; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}

