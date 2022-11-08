#include <stdio.h>

int main (void)
{
    int a,b,c,d,e;
    int max;

    a = 1;
    b = 2;
    c = 4;
    d = 9;
    e = 1;

    max = -1;

    if (a > max)
    {
        max = a;
    }

    if (b > max)
    {
        max = b;
    }
    
    if (c > max)
    {
        max = c;
    }

    if (d > max)
    {
        max = d;
    }

    if (e > max)
    {
        max = e;
    }

    printf("The biggest number is: %d\n", max);

}