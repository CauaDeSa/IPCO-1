#include <stdio.h>

int main (){    
    int comprimento, largura, altura;
    float volume;

    printf("\nQual o comprimento da caixa?(cm): ");
    scanf("%d", &comprimento);
    
    printf("Qual a largura da caixa?(cm): ");
    scanf("%d", &largura);
    
    printf("Qual a altura da caixa?(cm): ");
    scanf("%d", &altura);
    
    volume = comprimento * largura * altura;
    volume = volume / 100;
    
    printf("Volume da caixa: %.2f L.\n\n", volume); 
    
    return 0;
}