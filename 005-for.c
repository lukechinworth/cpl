#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr, cels;

    for (fahr = UPPER; fahr > LOWER; fahr = fahr - STEP)
    {
        cels = (fahr - 32) * 5 / 9;

        printf("%3.0f%6.1f\n", fahr, cels);
    }
}
