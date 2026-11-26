#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 40

typedef struct {
    int chars[NUM];
    size_t length;
} IntArray;

// print lines over NUM
int main()
{
    int c;
    IntArray line = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (line.length >= NUM) 
            {
                putchar(c);
            }

            memset(line.chars, 0, NUM);
            line.length = 0;
        }
        else
        {
            if (line.length < NUM)
            {
                line.chars[line.length] = c;
                line.length += 1;
                
                if (line.length == NUM)
                {
                    for (int i=0; i < line.length; ++i) {
                        putchar(line.chars[i]);
                    }
                }
            }
            else 
            {
                putchar(c);
            }

        }
    }
}