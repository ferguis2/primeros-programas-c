#include <stdio.h>
#include <stdlib.h>

int main(){

    int opciones=0,total, numero1,numero2;
    printf("\t----------Menu----------\n");
    printf("Ingrese una opcion\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%i",&opciones);
    printf("Ingrese el primer numero\n");
    scanf("%i",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%i",&numero2);

    switch (opciones)
    {
    case 1:
        total = numero1 + numero2;
        printf("%i", total);
        break;

    case 2:
        total = numero1 - numero2;
        printf("%i",total);
        break;

    case 3 :
        total = numero1 * numero2;
        printf("%i",total);
        break;

    case 4 :
        float total= (float)numero1 / (float)numero2;
        printf("%0.2f",total);
        break;
    default:
        printf("Ingrese una opcion valida");
        break;
    }
    return 0;
}