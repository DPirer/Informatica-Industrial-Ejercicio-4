#include <stdio.h>


// Pedro Antonio Estévez Pérez

// Ejercicio 4

/* Diseñe una función en C que reciba un vector de números reales, v, como
 * argumento de entrada, determine cuántos de todos ellos son mayores al primero
 * de los elementos del vector y devuelva la suma de todos ellos.*/

void main()
{
    int longitud, i, contador=0;

    while (1)
    {
        printf("Introduce la longitud del vector: ");
        scanf("%d", &longitud);
        if (longitud <= 0)
            printf("Introduce un numero valido\n");
        else
            break;
    }

    /* Se puede hacer todo dentro del mismo bucle de introducción de datos. Vamos
     * introduciendo los elementos, almacenamos el primero y lo comparamos con el resto
     * y si es mayor, sumamos uno.*/

    int vector[longitud];

    for (i=0; i<longitud; i++)
    {
        printf("Introduce el elemento %d: ", i);
        scanf("%d", &vector[i]);
        if (vector[i] > vector[0])
            contador++;
    }

    /* Imprimimos el resultado. No me gustaba la no concordancia de plural y singular
     * así que lo he dividido.*/

    if (contador == 0)
        printf("No hay ningun elemento mayor que %d\n\n", vector[0]);
    else if (contador == 1)
        printf("Hay %d elemento mayor que %d\n\n", contador, vector[0]);
    else
        printf("Hay %d elementos mayores que %d\n\n", contador, vector[0]);
}
