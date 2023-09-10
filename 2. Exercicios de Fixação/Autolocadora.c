#include <stdio.h>

int main(){
    float diaria, taxakm, usokm, desc, total;
    int dias;
    
    printf("\nQual é o valor da taxa fixa por dia? ");
    scanf("%f", &diaria);
    
    printf("\nQual é o valor da taxa por KM rodado? ");
    scanf("%f", &taxakm);
    
    printf("\nQuantos dias de aluguel? ");
    scanf("%d", &dias);
    
    printf("\nQuantos quilômetros rodados?: ");
    scanf("%f", &usokm);
    
    desc = ((diaria * 0.1) * dias);
    diaria = ((diaria * 0.9) * dias);
    taxakm = (taxakm * usokm);
    total = diaria + taxakm;
    
    printf("\nValor total do aluguel: %.2f reais. \nValor do desconto: %.2f reais. \nQuantidade de dias: %d dias. \nQuilômetros rodados: %.1f Km \n\n", total, desc, dias, usokm);
    
    return 0;
}