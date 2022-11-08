#include <stdio.h>
#include <math.h>

int main(void)
{
    double monto; //monto de deposito
    double principal; //monto principal
    double tasa = .05; //interes compuesto anual
    int year; //contador de años
    int yeartop;

    printf("\nIngrese el monto principal: ");
    scanf("%lf", &principal);

    printf("\nIngrese la cantidad de años que desea evaluar: ");
    scanf("%d", &yeartop);

    while (yeartop <= 0)
    {        
        printf("\nINVALIDO -- Ingrese la cantidad de años que desea evaluar: ");
        scanf("%d", &yeartop);
    }

    //impresion clean
    printf("\n%-4s%25s\n\n", "Año", "Monto de deposito");

    //calcula monto de deposito para cada uno de los 10 años
    for ( year = 1; year <= yeartop; year++)
    {
        //calculo de monto para el año especificado
        monto = principal * pow(1.0 + tasa, year);
    
        //muestra la linea de la tabla
        printf("%3d%25.2f\n", year, monto);
    }

    printf("\nFIN DEL PROGRAMA\n");

    return 0; //terminacion exitosa :p

}