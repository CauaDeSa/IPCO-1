#include <stdio.h>

int main(){
    int p, m, g, qtd, valor;

    p = 40;
    m = 42;
    g = 45;

    printf("\nDigite a quantidade de P: ");
    scanf("%d", &qtd);
    valor = qtd * p;

    printf("Digite a quantidade de M: ");
    scanf("%d", &qtd);
    valor = valor + qtd * m;

    printf("Digite a quantidade de G: ");
    scanf("%d", &qtd);
    valor = valor + qtd * g;

    printf("\nTotal arrecadado: %d.00 reais \n\n", valor);

    return 0;
}