#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "division.h"

int main(int argc, char const *argv[])
{
    int a, b;
    int opcion;

    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);

    printf("\n--- CALCULADORA ---\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            int resultado_suma = sumar(a, b);
            printf("Suma: %d\n", resultado_suma);
            break;
        case 2:
            int resultado_resta = restar(a, b);
            printf("Resta: %d\n", resultado_resta);
            break;
        case 3:
            int resultado_multi = multiplicar(a, b);
            printf("Multiplicacion: %d\n", resultado_multi);
            break;
        case 4:
            if (b == 0)
                printf("Error: no se puede dividir entre cero\n");
            else {
                float resultado_div = division(a, b);
                printf("Division: %.2f\n", resultado_div);
            }
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}
