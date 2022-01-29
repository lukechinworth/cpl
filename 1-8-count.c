#include <stdio.h>

int main()
{
    int c, b, t, nl;
    b = t = nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
        if (c == '\t')
        {
            ++t;
        }

        if (c == ' ')
        {
            ++b;
        }
    }

    printf("nl: %d, t: %d, b: %d\n", nl, t, b);
}
