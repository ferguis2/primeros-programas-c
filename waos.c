#include <stdio.h>
#include <stdlib.h>
int main(){

    int Billy = 81, Rebeca=67,opcion =0,respuesta=0,suma=0,cont=0;
    char x;
    
    printf("Escoja su jugador: 1.Billy 2.Rebaca\n");
    scanf("%i",&opcion);
    if (opcion == 1){
        while (respuesta != 81){
            printf("Debe ingresar 10 numeros que sumados den 81\n");

            printf("Ingrese un numero\n");
            scanf("%i",&suma);
            respuesta=suma+respuesta;
            printf("\n%i\n",respuesta);
            cont++;
            
            if (cont==10 && respuesta !=81 || respuesta > 81){
                printf("Te quedaste sin intentos prueba de nuevo\n");
                respuesta=0;
            }
            
        }
        
    }
        if (opcion == 2){
        while (respuesta != 67){
            printf("Debe ingresar 10 numeros que sumados den 67\n");

            printf("Ingrese un numero\n");
            scanf("%i",&suma);
            respuesta=suma+respuesta;
            printf("\n%i\n",respuesta);
            cont++;
            if (cont==10 && respuesta !=67 || respuesta > 67){
                printf("Te quedaste sin intentos prueba de nuevo\n");
                respuesta=0;
                printf("Valor devuelto a %i",respuesta);
            }
            
        }
        
    }
    
}