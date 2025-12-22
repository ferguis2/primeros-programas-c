#include <stdio.h>
#include <stdlib.h>
int main()
{

    int Billy = 81, Rebeca = 67, opcion = 0, respuesta = 0, suma = 0, cont = 0, intentos = 0, jugador = 0;

    printf("Escoja su jugador: 1.Billy 2.Rebaca\n");
    scanf("%i", &opcion);
    if (opcion == 1)
    {
        jugador = Billy;
    }
    else
    {
        jugador = Rebeca;
    }
    printf("Debe ingresar 10 numeros que sumados den %i\n", jugador);
    while (respuesta != jugador)
    {

        printf("\nIngrese un numero\n");
        scanf("%i", &suma);
        respuesta = suma + respuesta;
        printf("Suma actual\n%i\n", respuesta);
        cont++;
        intentos++;
        for (int i = 0; i < cont; i++)
        {

            printf("x");

            
        }
        
        if (cont == 10 && respuesta != jugador || respuesta > jugador || respuesta == jugador && intentos < 10)
        {
            printf("\nTe quedaste sin intentos prueba de nuevo\n");
            respuesta = 0;
            cont =0;
        }
    }
    if (respuesta == Rebeca || respuesta == Billy)
    {
        printf("\nFelicidades ganaste el juego en %i intentos", intentos);
    }
}