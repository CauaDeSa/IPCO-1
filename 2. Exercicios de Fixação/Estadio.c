#include <stdio.h>

int main(){    
    int total, popular, geral, arquibancada, cadeiras;
    
    printf("\nQuantos espectadores compareceram hoje? ");
    scanf("%d", &total);
    
    popular = total * 0.1;
    geral = ((total * 0.5) * 5);
    arquibancada = ((total * 0.3) * 10);
    cadeiras = ((total * 0.1) * 20);
    
    total = popular + geral + arquibancada + cadeiras;
    
    printf("\nRenda do Jogo: %d.00 reais\n\n", total);
    
    return 0;
}