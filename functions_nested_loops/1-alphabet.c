#include "main.h"

/**
 *Main -Prints alphabet lowercase
 *
 *Return: Return 0
 */

int main(void)
{
                char hol[] = "abcdefghijklmnopqrstuvwxyz";
                int n;

                n = 0;

                while (n <= 25)
                {
                        _putchar(hol[n]);
                        n++;
                }
                _putchar('\n');
                return (0);
}
