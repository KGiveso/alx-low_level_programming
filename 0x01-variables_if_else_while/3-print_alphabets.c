#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char lower, upper;
  int i;

  for (i = 0; i < 26; i++)
    {
      lower = 'a' + i;
      putchar(lower);
    }

  for (i = 0; i < 26; i++)
    {
      upper = 'A' + i;
      putchar(upper);
    }

  putchar('\n');
  return (0);
}

