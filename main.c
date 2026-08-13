#include <stdio.h>

int main() {

    // Área do círculo
    float raio, pi = 3.14159, raioQuadrado, area;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    raioQuadrado = raio * raio;
    area = pi * raioQuadrado;

    printf("A area do raio %.2f = %.2f\n", raio, area);

    // Área do trapézio
    float B, b, h, calculo;

    printf("\nInforme o valor de B: ");
    scanf("%f", &B);

    printf("Informe o valor de b: ");
    scanf("%f", &b);

    printf("Informe o valor de h: ");
    scanf("%f", &h);

    calculo = ((B + b) * h) / 2;

    printf("Area total do trapezio = %.2f\n", calculo);

    return 0;
}
