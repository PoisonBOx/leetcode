#include <stdio.h>
#include <math.h>
#include <limits.h>

int reverse(int x)
{
    int x_every_pos[32];
    int count = 0;
    long x_reverse = 0;

    while (x)
    {
        x_reverse = x_reverse * 10;
        x_every_pos[count] = x % 10;
        x_reverse = x_reverse + x_every_pos[count];
        x = x / 10;
        count++;
    }
    if (x_reverse<INT_MIN || x_reverse>INT_MAX)
        return 0;

    return x_reverse;
}

int main()
{
    int x = -123;
    int x_reverse;

    x_reverse = reverse(x);

    printf("x=%d\nx_reverse=%d\n", x, x_reverse);

    return 0;
}