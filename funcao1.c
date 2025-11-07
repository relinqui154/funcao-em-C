#include <stdio.h>

int valorPos(int p, int a, int b, int c, int d, int e, int f) {
    switch(p) {
        case 0: return a;
        case 1: return b;
        case 2: return c;
        case 3: return d;
        case 4: return e;
        case 5: return f;
    }
    return 0;
}

int main() {

    int a = 1, b = 0, c = 5, d = -2, e = -5, f = 7;
    int soma;

    soma = valorPos(0, a, b, c, d, e, f) +
           valorPos(1, a, b, c, d, e, f) +
           valorPos(5, a, b, c, d, e, f);

    printf("Soma = %d\n\n", soma);

    e = 100;

    printf("Valores:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    return 0;
}

