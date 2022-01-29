#include <stdio.h>

// collapse multiple spaces into 1.
int main()
{
    int c, p;

    while ((c = getchar()) != EOF)
    {
        if (!(c == ' ' && p == ' '))
        {
            putchar(c);
        }

        p = c;
    }
}
