#include <stdio.h>

int main()
{
    float base, altura, volumen;

    // Solicitar al usuario la base de la pirámide
    printf("Ingrese la longitud de la base de la pirámide: ");
    scanf("%f", &base);

    // Solicitar al usuario la altura de la pirámide
    printf("Ingrese la altura de la pirámide: ");
    scanf("%f", &altura);

    // Calcular el volumen de la pirámide
    volumen = (base * base * altura) / 3;

    // Mostrar el resultado
    printf("El volumen de la pirámide es: %.2f\n", volumen);

    return 0;
}