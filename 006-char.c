#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c != 10)
        {
            putchar(c);
        }
    }
}
