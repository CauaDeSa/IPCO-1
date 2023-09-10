#include <stdio.h>

int main(){    
    int valor, cd1, cd5, cd10, cd50, cd100;

    printf("\n\nQual o valor a ser decomposto?: ");
    scanf("%d", &valor);

    cd100 = valor / 100;
    valor = valor - (cd100 * 100);

    cd50 = valor / 50;
    valor = valor - (cd50 * 50);

    cd10 = valor / 10;
    valor = valor - (cd10 * 10);

    cd5 = valor / 5;
    valor = valor - (cd5 * 5);

    cd1 = valor / 1;
    valor = valor - cd1;
   
    printf("Cédulas de 100:%d\n", cd100);
    printf("Cédulas de 50:%d\n", cd50);
    printf("Cédulas de 10:%d\n", cd10);
    printf("Cédulas de 5:%d\n", cd5);
    printf("Cédulas de 1:%d\n\n", cd1);

    return 0;
}