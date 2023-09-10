#include <stdio.h>

int main(){
    int anos, perday, maço, dias;
    float gasto, valorcigarro, valordia;
    
    printf("\nVocê fuma há quantos anos?: ");
    scanf("%d", &anos);
    
    printf("\nQuantos cigarros você fuma em média por dia?: ");
    scanf("%d", &perday);
    
    printf("\nQual o valor do maço?: ");
    scanf("%d", &maço);
    
    // anos pra dias //
    dias = anos * 360;
    
    valorcigarro = maço / 20;
    valordia = valorcigarro * perday;
    gasto = dias * valordia;
    
    printf("\nValor gasto total: %.2f reais.\n\n", gasto);

    return 0;
}