// EJERCICIO: SACAR EL PROMEDIO DEL PESO DE 5 ALUMNOS
#include <stdio.h>

int main()
{
    int i;
    float pesos[5];
    float acu = 0, promedio;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el peso del estudiante [%d]: ", i); // ingresa en las posiciones
        scanf("%f", &pesos[i]);
        acu += pesos[i];
        printf("\n");
    }
    promedio = acu / 5;
    printf("El promedio de los pesos es: %.2f ", promedio);

    return 0;
}



