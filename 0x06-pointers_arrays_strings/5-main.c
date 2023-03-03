#include "main.h"
#include <stdio.h>
/* Function prototype */
char *string_toupper(char *);
int main(void)
{
char str[] = "Mogoboya";   
printf("Original string: %s\n", str);
string_toupper(str);
printf("Uppercase string: %s\n", str);
return (0);
}

