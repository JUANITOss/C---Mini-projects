#include <stdio.h>

int main(void)
{
    int calif;
    int cuentaA = 0;
    int cuentaB = 0;
    int cuentaC = 0;
    int cuentaD = 0;
    int cuentaF = 0;

    printf("Introduzca la letra correspondiente a calificación (EOF para terminar).\n");

    while ((calif = getchar()) != EOF)
    {
        // Determinar la calif introducida
        switch (calif)
        {
        case 'A': 
        case 'a':
            ++cuentaA;
            break;

        case 'B':
        case 'b':
            ++cuentaB;
            break;

        case 'C': 
        case 'c':
            ++cuentaC;
            break;

        case 'D':
        case 'd':
            ++cuentaD;
            break;

        case 'F':
        case 'f':
            ++cuentaF;
            break;

        //IGNORA NUEVA LINEA,TAB O ESPACIOS
        case '\n': 
        case '\t':
        case ' ':
            break;

        default:
            printf("Invalid input.\n");
            break;
        }
    }

    printf("\nLos totales de cada calificación son: \n");

    printf("CALIFICACIÓN A: %d\n", cuentaA);
    printf("CALIFICACIÓN B: %d\n", cuentaB);
    printf("CALIFICACIÓN C: %d\n", cuentaC);
    printf("CALIFICACIÓN D: %d\n", cuentaD);
    printf("CALIFICACIÓN F: %d\n", cuentaF);
    return 0;
}
