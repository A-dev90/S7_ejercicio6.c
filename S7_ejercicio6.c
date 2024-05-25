// EJERCICIO: SACAR EL PROMEDIO DELL PESO DE 5 ALUMNOS Y DECIR CUANTOS SON MAYORES Y MENORES AL PROMEDIO
#include <stdio.h>
void mayormenor(float xpesos[], float xpromedio);

int main()
{
    float pesos[5];
    float promedio;
    int i;
    float acu = 0;

    
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el peso del estudiante [%d]: ", i);
        scanf("%f", &pesos[i]);
        acu += pesos[i];
        printf("\n");
    }

    
    promedio = acu / 5;
    printf("El promedio de los pesos es: %.2f\n", promedio);

  
    mayormenor(pesos, promedio);

    return 0;
}

void mayormenor(float xpesos[], float xpromedio)
{
    int i;
    int cantmayor = 0;
    int cantmenor = 0;

    for (i = 0; i < 5; i++)
    {
        if (xpesos[i] >= xpromedio)
        {
            cantmayor++;
        }
        else if (xpesos[i] < xpromedio)
        {
            cantmenor++;
        }
    }

    printf("Cantidad de estudiantes con peso mayor al promedio: %d\n", cantmayor);
    printf("Cantidad de estudiantes con peso menor al promedio: %d\n", cantmenor);
}
