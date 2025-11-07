#include <stdio.h>

float lerNumero() {
    float x;
    printf("Digite um valor real: ");
    scanf("%f", &x);
    return x;
}

float calcQuadrado(float n) {
    return n * n;
}

int main() {

    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;

    printf("Leitura de 10 valores:\n\n");

    n1 = lerNumero();
    n2 = lerNumero();
    n3 = lerNumero();
    n4 = lerNumero();
    n5 = lerNumero();
    n6 = lerNumero();
    n7 = lerNumero();
    n8 = lerNumero();
    n9 = lerNumero();
    n10 = lerNumero();

    q1 = calcQuadrado(n1);
    q2 = calcQuadrado(n2);
    q3 = calcQuadrado(n3);
    q4 = calcQuadrado(n4);
    q5 = calcQuadrado(n5);
    q6 = calcQuadrado(n6);
    q7 = calcQuadrado(n7);
    q8 = calcQuadrado(n8);
    q9 = calcQuadrado(n9);
    q10 = calcQuadrado(n10);

    printf("\nValores digitados:\n");
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",
           n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

    printf("\nQuadrado dos valores:\n");
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",
           q1, q2, q3, q4, q5, q6, q7, q8, q9, q10);

    return 0;
}
