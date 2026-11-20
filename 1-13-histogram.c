#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items;
    size_t capacity;
} IntArray;

// print histogram of "word"s by length
int main()
{
    int c, length;
    IntArray lengths = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= lengths.capacity) {
            if (lengths.capacity == 0) lengths.capacity = 256;
            else lengths.capacity *= 2;
            lengths.items = realloc(lengths.items, lengths.capacity*sizeof(*lengths.items));
        }
        
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length > 0) {
                lengths.items[length] += 1;
            }
            length = 0;
        } else {
            ++length;
        }
    }

    for (int i=0; i < lengths.capacity; ++i) {
        if (lengths.items[i] <= 0) continue;
        
        printf("%d ", i);
        for (int j=0; j < lengths.items[i]; ++j) {
            printf("[]");
        }

        printf("\n");
    }
}
