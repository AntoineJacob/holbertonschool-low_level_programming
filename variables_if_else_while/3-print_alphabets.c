#include <stdio.h>

int main(void)
{
  char a[26] = "abcdefghijklmnopqrstuvwxyz";
  char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;

  for (i = 0; i < 26; i++)
    {
      putchar(a[i]);
      putchar(b[i]);
    }
  putchar('\n');
  return (O);
}
