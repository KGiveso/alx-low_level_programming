#include "main.h"
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int index = 1;
unsigned int i = 0;
do {
if (*s == '-')
index *= -1;
else if (*s >= '0' && *s <= '9')
i = i * 10 + (*s - '0');
else if (i > 0)
break;
} while (*s++);
return (i *index);
}
