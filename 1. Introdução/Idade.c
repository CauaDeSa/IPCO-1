#include <stdio.h>

int main(){
    char nome[15];
    int idade;

    printf("Qual seu nome? ");
    scanf("%s", &nome);

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    idade = idade * 365;

    printf("%s, você já sofreu: %d dias! \n\n", nome, idade);
    
    return 0;
}
