#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("Adelante, elegi! Estoy seguro de que perderas!\n");
    scanf("%d",&opcion);

    // el switch evalua el valor de una variable. Esta DEBE ser DISCRETA!
    switch (opcion){
        case 0: // el CASE no puede evaluar rangos, solamente valores determinados
            printf("Elegiste la opcion 0, perdiste!\n");
            break;
        case 1: // la comparacion del CASE es como un IF pero comparando con la igualdad al valor que evalua
            printf("Elegiste la opcion 1, perdiste!\n");
            break;
        case 2:
            printf("Elegiste la opcion 2, no ganaste pero al menos no perdiste!\n");
            break;
        default: // si ningun caso es valido, se ejecuta la el caso por DEFECTO, que puede o no estar
            printf("opcion invalida, no tengo tanas opciones disponibles!\n");
            break;
    }
    system("PAUSE");

    printf("Segunda chance, ingresa otra opcion:");
    scanf("%d",&opcion);
    switch (opcion){
        case 0:
        case 1: // si la misma accion va para varios casos
        case 2: // no hagas copy/paste de codigo, simplificalo asi!
        case 3:
        case 4:
        case 5:
            printf("Elegiste la opcion %d, perdiste!\n",opcion);
            break;
        case 6:
            printf("Bueno, ahora si ganaste\n");
            break;
        default: // si ningun caso es valido, se ejecuta la el caso por DEFECTO, que puede o no estar
            printf("opcion invalida, no tengo tanas opciones disponibles!");
            break;
    }
    return 0;
}
