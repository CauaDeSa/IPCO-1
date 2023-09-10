#include <stdio.h>

int main (){    
    float chip, anel, frango;
    
    printf("Quantidade de frangos: ");
    scanf("%d", &frango);
    
    chip = 4.00;
    anel = 3.50 * 2;
    
    frango = (chip + anel) * frango; 
    
    printf("Gasto total: %.2f Reais \n\n", frango);

    return 0;
}