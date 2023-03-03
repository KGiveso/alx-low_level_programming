#include <stdio.h>
#include <string.h>
int main() {
char str1[20] = "Hello";
char str2[20] = "World";
char str3[20];
// Copy str1 into str3
strcpy(str3, str1);
printf("str3 after strcpy(): %s\n", str3);
// Concatenate str1 and str2 into str3
strcat(str3, str2);
printf("str3 after strcat(): %s\n", str3);
// Compare str1 and str2
if (strcmp(str1, str2) == 0) {
printf("str1 and str2 are equal\n");
}
else 
{
printf("str1 and str2 are not equal\n");
}
return 0;
}

