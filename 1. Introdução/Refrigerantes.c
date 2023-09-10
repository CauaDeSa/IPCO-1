#include <stdio.h>

int main(){
    int lata, garrafa, pet;
    float total_litros;

    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%d", &lata);
    total_litros = lata * 350;

    printf("Digite a quantidade de garrafas de 600ml: ");
    scanf("%d", &garrafa);
    total_litros = total_litros + garrafa * 600;

    printf("Digite a quantidade de garrafas de 2 litros: ");
    scanf("%d", &pet);
    total_litros = total_litros + pet * 2000;

    total_litros = total_litros / 1000;

    printf("Litros de refrigerante comprados: %.3f litros \n\n", total_litros);
    
    return 0;
}