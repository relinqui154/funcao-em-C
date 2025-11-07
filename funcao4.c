#include <stdio.h>

int ler() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    return n;
}

int pegaValor(int pos, int a, int b, int c, int d, int e, int f, int g, int h) {
    switch(pos) {
        case 1: return a;
        case 2: return b;
        case 3: return c;
        case 4: return d;
        case 5: return e;
        case 6: return f;
        case 7: return g;
        case 8: return h;
    }
    return 0;
}

int main() {

    int a, b, c, d, e, f, g, h;
    int x, y, soma;

    a = ler();
    b = ler();
    c = ler();
    d = ler();
    e = ler();
    f = ler();
    g = ler();
    h = ler();

    printf("\nDigite a posicao X (1 a 8): ");
    scanf("%d", &x);

    printf("Digite a posicao Y (1 a 8): ");
    scanf("%d", &y);

    soma = pegaValor(x, a, b, c, d, e, f, g, h) +
           pegaValor(y, a, b, c, d, e, f, g, h);

    printf("\nSoma dos valores nas posicoes %d e %d = %d\n", x, y, soma);

    return 0;
}

