#include <stdio.h>

int main() {
    int valor, qtnotas;      
    scanf("%d", &valor);
    printf("%d\n", valor);
    qtnotas = valor / 100;
    printf("%d nota(s) de R$ 100,00\n", qtnotas);
    valor = valor - (qtnotas * 100);
    qtnotas = valor / 50;
    printf("%d nota(s) de R$ 50,00\n", qtnotas);
    valor = valor - (qtnotas * 50);
    qtnotas = valor / 20;
    printf("%d nota(s) de R$ 20,00\n", qtnotas);
    valor = valor - (qtnotas * 20);
    qtnotas = valor / 10;
    printf("%d nota(s) de R$ 10,00\n", qtnotas);
    valor = valor - (qtnotas * 10);
    qtnotas = valor / 5;
    printf("%d nota(s) de R$ 5,00\n", qtnotas);
    valor = valor - (qtnotas * 5);
    qtnotas = valor / 2;
    printf("%d nota(s) de R$ 2,00\n", qtnotas);
    valor = valor - (qtnotas * 2);
    qtnotas = valor / 1;
    printf("%d nota(s) de R$ 1,00\n", qtnotas);
    return 0;
}