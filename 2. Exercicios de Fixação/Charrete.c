#include <stdio.h>

int main(){
    int horas, acima3, abaixo3;
    float valor;

    printf("\nA charrete foi utilizada por quantas horas? ");
    scanf("%d", &horas);

    acima3 = horas / 3;
    valor = acima3 * 8.5;
    abaixo3 = horas % 3;
    valor = valor + (abaixo3 * 3.5);

    printf("\nValor total: %.2f reais\n\n", valor);

    return 0;
}