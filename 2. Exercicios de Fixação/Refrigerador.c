#include <stdio.h>

int main(){    
    float potencia, tempo, preçokwh, gasta;
    
    printf("\nQual a taxa de potência do refrigerador?(watts): ");
    scanf("%f", &potencia);
    
    printf("\nQuanto tempo ele permaneceu ligado?(minutos): ");
    scanf("%f", &tempo);
    
    printf("\nQual o valor do kilowatt hora?: ");
    scanf("%f", &preçokwh);
    
    //saida: energia total gasta, preco a ser pago //

    gasta = ((potencia / 1000) * (tempo / 60));
    preçokwh = gasta * preçokwh;

    printf("\n\nEnergia total gasta: %.2f kwh \n\nPreço a ser pago: %.2f reais\n\n", gasta, preçokwh);
    
    return 0;
}