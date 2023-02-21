#include <stdio.h>

int main(void);
{
int prev = 1, curr = 2, temp;
long sum = 0;

while (curr <= 4000000)
{
if (curr % 2 == 0)

sum += curr;

temp = curr;
curr += prev;
prev = temp;
}

printf("%ld\n", sum);

return (0);
}
