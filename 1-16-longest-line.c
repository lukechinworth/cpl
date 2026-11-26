#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int chars[1024];
    size_t length;
} IntArray;

// print longest line
int main()
{
    int c;
    IntArray line = {0};
    IntArray longest_line = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (line.length > longest_line.length) 
                longest_line = line;
            line.length = 0;
            memset(line.chars, 0, 1024);
        }
        else
        {
            // stop saving the text once we reach the limit
            if (line.length < 1024)
                line.chars[line.length] = c;
            
            line.length += 1;
        }
    }

    printf("Length: %zu\n", longest_line.length);
    
    for (int i=0; i < longest_line.length; ++i) {
        putchar(longest_line.chars[i]);
    }
}