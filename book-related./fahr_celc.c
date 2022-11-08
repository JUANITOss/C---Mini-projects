#include <stdio.h>

int main(){
    
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celcius = 5.0 * (fahr-32) / 9.0;
        printf("%3.0f %10.2f\n", fahr,celcius);
        fahr += step;
    }

    printf("\n\nPROGRAMA TERMINADO --");
    
}
