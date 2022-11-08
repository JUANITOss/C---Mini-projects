# include <stdio.h>

int main(void)
{
    int i;
    int a,b,c,d,e;
    int num;

    printf("Ingrese un número de 5 digitos a continuación:\n");

    scanf("%d", &num);
    
    e = num % 10;
    
    num = num / 10;

    d = num % 10;
    
    num = num / 10;

    c = num % 10;
    
    num = num / 10;

    b = num % 10;
    
    num = num / 10;

    a = num % 10;
    
    num = num / 10;

    printf("RESTO: %d\n", num);

    printf("%d_%d_%d_%d_%d\n", a, b, c, d, e);
    
    return 0;
}
