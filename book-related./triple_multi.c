#include <stdio.h>

int main(void)
{
    int a,b,c;
    long multi;

    printf("Select three numbers that will be multiplied.\n");

    scanf("%d%d%d", &a,&b,&c);

    multi = a*b*c;

    printf("The multiplication of your numbers equals to: %lu\n", multi);

    return 0;

}