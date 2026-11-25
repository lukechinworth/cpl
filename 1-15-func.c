#include <stdio.h>

// convert fahr to cels using a while loop.

int f2c(int f) {
    return (f - 32) * 5 / 9;
}

int main()
{
    float fahr, cels;
    int lower = 0;
    int upper = 300;
    int step = 20;

    printf("%3s%6s\n", "fahr", "cels");

    fahr = lower;

    while (fahr <= upper)
    {
        fahr = fahr + step;
        cels = f2c(fahr);

        printf("%3.0f%6.1f\n", fahr, cels);
    }
    return 0;
}
