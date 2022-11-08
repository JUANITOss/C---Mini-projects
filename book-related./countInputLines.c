#include <stdio.h>
//count lines in input

void main()
{
    int c, nl, ns, nt;

    nl = 0;
    ns = 0;
    nt = 0;

    while ((c = getchar()) != EOF) // eof = ctrl+d (or ctrl+z on win)
    {
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++ns;
        else if (c == '\t')
            ++nt;
    }
    printf("%d\n", nl);
    
}