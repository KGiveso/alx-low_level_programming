#include <stdio.h>

int main(void);
{
int a = 1, b = 2, c, count = 2;

printf("%d, %d", a, b);

while (count < 98)
{
c = a + b;
a = b;
b = c;
printf(", %d", c);
count++;
}
printf("\n");
return (0);
}
