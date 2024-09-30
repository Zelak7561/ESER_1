#include <stdio.h>

int main(void) {
    //NUMBERS
    double num1;
    double num2;

    //Results
    double sum;
    double substract;
    double multiplication;
    double division;
    double module;

    //CHOICE
    int choice;
    printf("Inserire la scelta:\n");
    scanf("%d", &choice);

    //OPTIONS
    switch (choice) {
        case 1:
            printf("||||||SOMMA||||||\n");
            printf("Inserisci il primo numero\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero\n");
            scanf("%lf", &num2);
            sum = num1 + num2;
            printf("La somma e: %f\n", sum);
            break;
        case 2:
            printf("||||||SOTTRAZIONE||||||\n");
            printf("Inserisci il primo numero\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero\n");
            scanf("%lf", &num2);
            substract = num1 - num2;
            printf("La sottrazione e %f \n", substract);
            break;
        case 3:
            printf("||||||MOLTIPLICAZIONE||||||\n");
            printf("Inserisci il primo numero\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero\n");
            scanf("%lf", &num2);
            multiplication = num1 * num2;
            printf("La motliplicazione e: %f\n", multiplication);
            break;
        case 4:
            printf("||||||DIVISIONE||||||\n");
            printf("Inserisci il primo numero\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero\n");
            scanf("%lf", &num2);
            division = num1 / num2;
            printf("La divisione e: %f\n", division);
            break;
        case 5:
            int n1;
            int n2;
            printf("||||||MODULO||||||\n");
            printf("Inserisci il primo numero\n");
            scanf("%d", &n1);
            printf("Inserisci il secondo numero\n");
            scanf("%d", &n2);
            module = n1 % n2;
            printf("Il modulo e: %f\n", module);
            break;
    }


    return 0;
}
