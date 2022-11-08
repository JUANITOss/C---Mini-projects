#include <stdio.h>

int main(void)
{
    int id, note;

    int cs = 0;
    int ca = 0;
    int cr = 0;
    
    printf("Input the student's id (-1 to finish): ");
    scanf("%d", &id);

    while (id != -1) {

        printf("\nInput 1 if the student approved or 2 if he didn`t pass: ");
        scanf("%d", &note);

        if (note == 1)
            ++ca;
        
        else if (note == 2)
            ++cr;
        
        else {
            printf("\nINVALID INPUT -- RE-ENTER THE ID: ");
            scanf("%d", &id);
            continue;
        }

        ++cs;

        printf("\nInput the student's id (-1 to finish): ");
        scanf("%d", &id);

    }

    printf("\nThe total of students introduced is %d\nThe amount of students who passed is %d; and the amount of those who didn't is %d.\n", cs, ca, cr); 

    return 0;
}
