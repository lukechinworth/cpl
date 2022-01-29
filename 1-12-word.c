#include <stdio.h>

// print input one word per line.
int main()
{
    int c, p, cb, pb;

    while ((c = getchar()) != EOF)
    {
        cb = (c == ' ' || c == '\t' || c == '\n');
        pb = (p == ' ' || p == '\t' || p == '\n');

        if (cb && pb)
        {
            ;
        }
        else if (cb)
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }

        // set previous to c.
        p = c;
    }
}
