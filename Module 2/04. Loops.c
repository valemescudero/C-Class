#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor,i=0;

    printf("Ingrese un valor:");
    scanf("%d",&valor);

    // ********* CICLO WHILE *********
    printf("\nEjecutando el while\n");
    while (i<valor){
        printf("%d|",i);
        i++;
    }
    printf("\n\nAhora los mismo pero mas simplificado!\n");
    i=0; // volvemos la variable i, que es nuestro contador, a cero
    while (i<valor)
        printf("%d|",i++); // de esta forma, el ++ se ejecuta despues de ejecutar el printf (es post incremento)

    // ********* CICLO DO-WHILE *********
    printf("\n\nAhora los mismo pero con el do-while\n");
    i=0; // resetamos el contador
    do {
        printf("%d|",i);
        i++;
    } while (i<valor);

    // ********* CICLO FOR *********
    printf("\n\nAhora los mismo pero con el for\n");
    for(i=0;i<valor;i++)
        printf("%d|",i);

    return 0;
}
