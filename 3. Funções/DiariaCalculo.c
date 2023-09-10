#include <stdio.h>

float diaria_promocional(float normal);
float renda(int lotacao, float diaria);

int main(){
    float diaria;

    printf("Valor diária: ");
    scanf("%f", &diaria);

    printf("Diaria promocional: R$%.2f\n", diaria_promocional(diaria));
    printf("Renda sem promoção: R$%.2f\n", renda(40, diaria));
    printf("Renda com promoção: R$%.2f\n", renda(70, diaria_promocional(diaria)));
    printf("Lucro com a promoção: R$%.2f\n\n", renda(70, diaria_promocional(diaria)) - renda(40, diaria));

    return 0;
}

float diaria_promocional(float normal){
    return normal * 22/100;
}

float renda(int lotacao, float diaria){
    return (42 * lotacao / 100) * diaria;
}