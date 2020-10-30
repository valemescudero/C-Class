#include <stdio.h>
#include <stdlib.h>
/*
Otra forma de definir funciones,
declarando el PROTOTIPO de la funcion antes del main
pero desarrollandola despues...
*/
void saludarNveces(int);
void saludoCustom(int, char);

int main()
{
    int i=0;
    char unTurno;
    printf("Cuantas veces queres saludar?");
    scanf("%d",&i);
    //fflush(stdin);
    printf("Y en que turno?");
    fflush(stdin);
    scanf("%c",&unTurno);
    saludarNveces(i);
    printf("\nAhora un saludo custom...\n");
    saludoCustom(i,unTurno);
    return 0;
}

void saludarNveces(int veces){
    int i=0;

    while (i<veces){
        printf("Hoooola soy German y te apuesto una chance de recuperatorio a que esta sestudiando Programacion!\n");
        i++;
    }
}

void saludoCustom(int veces, char turno){
    int i=0;

    switch (turno){
        case 'M':
        case 'm':
            for(i=0;i<veces;i++)
                printf("Buen dia gente!!!\n");
            break;
        case 'T':
        case 't':
            for(i=0;i<veces;i++)
                printf("Buen tardes...\n");
            break;
        case 'N':
        case 'n':
            for(i=0;i<veces;i++)
                printf("Buen noches, ya ni ganas de nada...\n");
            break;
        default:
            printf("Vivis en la dimension desconocida porque no se que turno es este!\n");
    }

}
