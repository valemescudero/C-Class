#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    esto es un comentario de parrafo
    */
    // aqui un comentario de linea
    int unaVariable=1;
    char unaLetra='A';
    float precio=4.50;

    unaVariable='Z';
    unaVariable=3;
    unaVariable=unaVariable+2;

    unaLetra=4;
    unaLetra='c';

    // mostrando valores de las variables segun el tipo de dato que tenga guardado
    printf("Variable entera x=%d\n",unaVariable);
    printf("variable char letra=%c\n",unaLetra); // el comentario de linea puede ir al final de una linea de codigo
    printf("El precio es %f\n",precio);
    return 0;
}
