#include <stdio.h>
#include <stdlib.h>
/*
Otra forma de definir funciones,
declarando el PROTOTIPO de la funcion antes del main
pero desarrollandola despues...
*/
int evaluarAlumno(int,int,int);

int main()
{
    int aprobacion;
    // al terminar de ejecutar la funcion, el resutado se guarda en "promedio"
    aprobacion=evaluarAlumno(8,9,7);
    printf("El codigo de aprobacion es: %d\n",aprobacion);
    aprobacion=evaluarAlumno(5,5,7);
    printf("El codigo de aprobacion es: %d\n",aprobacion);
    aprobacion=evaluarAlumno(6,7,5);
    printf("El codigo de aprobacion es: %d\n",aprobacion);
    aprobacion=evaluarAlumno(2,3,9);
    printf("El codigo de aprobacion es: %d\n",aprobacion);
    aprobacion=evaluarAlumno(9,8,7);
    printf("El codigo de aprobacion es: %d\n",aprobacion);
    return 0;
}

int evaluarAlumno(int a,int b,int c){

    if (a>=7 && b>=7 && c>=7)
        return 1;
    else
        return 0;
}
