#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items;
    size_t capacity;
} IntArray;

// print histogram of frequency of chars
int main()
{
    int c, j;
    IntArray chars = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= chars.capacity) {
            if (chars.capacity == 0) chars.capacity = 256;
            else chars.capacity *= 2;
            chars.items = realloc(chars.items, chars.capacity*sizeof(*chars.items));
        }

        chars.items[c] += 1;
    }

    for (int i=0; i < chars.capacity; ++i) {
        if (chars.items[i] > 0) {
            printf("%c: ", i);
            for (int j=0; j < chars.items[i]; ++j) {
                printf("[]");
            }
            printf("\n");
        }
    }
}
