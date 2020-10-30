#include <stdio.h>
#include <stdlib.h>
/*
las funciones se deben declarar al principio, antes del main,
siguiendo la logica de las bibliotecas stdio y stdlib:
se declaran al principio porque ahi estan las funciones que utilizaremos
en nuestro main
*/

void saludar(){
    printf("Hoooola soy German y te apuesto una chance de recuperatorio a que esta sestudiando Programacion!\n");
}

int main()
{
    int i=0;
    saludar();

    printf("Saludo a repeticion:\n");
    while(i<10){
        printf("%d) ",i++);
        saludar();
    }

    return 0;
}
