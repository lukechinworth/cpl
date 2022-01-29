#include <stdio.h>

// convert fahr to cels using a while loop.
int main()
{
    float fahr, cels;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("%3s%6s\n", "fah", "cels");

    fahr = lower;

    while (fahr <= upper)
    {
        fahr = fahr + step;
        cels = (fahr - 32) * 5 / 9;

        printf("%3.0f%6.1f\n", fahr, cels);
    }
}
