#include <stdio.h>

int main(){

    float valordol, taxadol, icms, lucro, valorbr, vf;

    printf("\n\nQual o valor em dólares?: ");
    scanf("%f", &valordol);

    printf("\nQual a taxa do dolar?: ");
    scanf("%f", &taxadol);

    printf("\nQual a taxa de ICMS?: ");
    scanf("%f", &icms);

    printf("\nQual o percentual de lucro da empresa?: ");
    scanf("%f", &lucro);

    valorbr = (valordol * taxadol);

    lucro = (lucro / 100) * valorbr;
    icms = (icms / 100) * valorbr;

    valorbr = valorbr + lucro + icms;

    printf("\nValor em Reais: %.2f\n\n", valorbr);   

    return 0;
}