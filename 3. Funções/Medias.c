#include <stdio.h>
#include <math.h>

//assinatura de funções
float ler_nota();
float soma(float, float);
float soma4(float, float, float, float);
float media_aritmetica(float a, float b, float c, float d);
float media_quadratica(float n1, float n2, float n3, float n4);
float media_harmonica(float, float, float, float);


//função principal 

int main (){
    float a, b, c, d;

    a = ler_nota();
    b = ler_nota();
    c = ler_nota();
    d = ler_nota();
    
    printf("\nMédia aritmetica: %.3f\n", media_aritmetica(a, b, c, d));
    printf("Média harmônica: %.3f\n", media_harmonica(a, b, c, d));
    printf("Média quadrática: %.3f\n\n", media_quadratica(a, b, c, d));

    return 0;
}

//implementação de funções
float ler_nota(){
    float nota;
    printf("Digite nota: ");
    scanf("%f", &nota);
    return nota;
}

float soma(float n1, float n2){
    return n1 + n2;
}

float soma4(float n1, float n2, float n3, float n4){
    float sum = 0;
    sum = soma(n1, n2);
    sum = soma(sum, n3);
    sum = soma(sum, n4);
    return sum;
}


float media_aritmetica(float a, float b, float c, float d){
    return soma4(a, b, c, d) / 4;
}

float media_harmonica(float a, float b, float c, float d){
    float sum;
    sum = soma4(1/a, 1/b, 1/c, 1/d);
    return 4 / soma4(1/a, 1/b, 1/c, 1/d);
}

float media_quadratica(float n1, float n2, float n3, float n4){
    return sqrt((soma4(pow(n1, 2), pow(n2, 2), pow(n3, 2), pow(n4, 2))) / 4);
}