#include <stdio.h>
#include <stdlib.h>
/*
Otra forma de definir funciones,
declarando el PROTOTIPO de la funcion antes del main
pero desarrollandola despues...
*/
float calcularPromedio();

int main()
{
    float promedio;

    // al terminar de ejecutar la funcion, el resutado se guarda en "promedio"
    promedio = calcularPromedio();
    printf("el promedio calculado es %2.2f\n",promedio);
    return 0;
}

float calcularPromedio(){
    float acum;
    int cant=0, nota;

    printf("Ingrese la nota:");
    scanf("%d",&nota);
    while (nota>0){
        acum+=nota;
        cant++;
        printf("Ingrese otra nota:");
        scanf("%d",&nota);
    }
    return acum/cant;
}
