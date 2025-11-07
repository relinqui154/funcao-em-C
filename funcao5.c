#include <stdio.h>

int lerEContarPar() {
    int v;
    printf("Digite um numero inteiro: ");
    scanf("%d", &v);
    if (v % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {

    int pares = 0;

    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();
    pares += lerEContarPar();

    printf("\nQuantidade de valores pares: %d\n", pares);

    return 0;
}

