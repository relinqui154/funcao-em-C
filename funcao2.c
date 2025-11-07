#include <stdio.h>

int lerValor() {
    int v;
    printf("Digite um numero inteiro: ");
    scanf("%d", &v);
    return v;
}

void mostrarValor(int v) {
    printf("Valor: %d\n", v);
}

int main() {

    int a, b, c, d, e, f;

    printf("Leitura de 6 valores:\n\n");

    a = lerValor();
    b = lerValor();
    c = lerValor();
    d = lerValor();
    e = lerValor();
    f = lerValor();

    printf("\n--- Valores digitados ---\n");
    mostrarValor(a);
    mostrarValor(b);
    mostrarValor(c);
    mostrarValor(d);
    mostrarValor(e);
    mostrarValor(f);

    return 0;
}
