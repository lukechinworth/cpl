#include <stdio.h>

// print histogram of "word"s by length
int main()
{
    int c, i, j, length;
    int lengths[20];

    for (i=0; i < 20; ++i) {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length > 0) {
                ++lengths[length];
            }
            length = 0;
        } else {
            ++length;
        }
    }

    for (i=0; i < 20; ++i) {
        printf("%d", i);
        for (j=0; j < lengths[i]; ++j) {
            printf("[]");
        }

        printf("\n");
    }
}
