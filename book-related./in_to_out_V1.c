# include <stdio.h>

int main()
{
    int c;
    printf("\nINICIO DEL PROGRAMA %d\n", EOF); //EOF = -1
    
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("\n");
    }
    
}