#include <stdio.h>

int main (){    
    float m1, m5, m10, m25, m50, m1r, total;

    printf("Quantidade de moedas de 1 centavo:");
    scanf("%f", &m1);
    
    printf("Quantidade de moedas de 5 centavos:");
    scanf("%f", &m5);
    
    printf("Quantidade de moedas de 10 centavos:");
    scanf("%f", &m10);
    
    printf("Quantidade de moedas de 25 centavos:");
    scanf("%f", &m25);
    
    printf("Quantidade de moedas de 50 centavos:");
    scanf("%f", &m50);
    
    printf("Quantidade de moedas de 1 real:");
    scanf("%f", &m1r);
    
    m1 = m1 * 0.01;
    m5 = m5 * 0.05;
    m10 = m10 * 0.10;
    m25 = m25 * 0.25;
    m50 = m50 * 0.50;
    
    total = m1 + m5 + m10 + m25 + m50 + m1r;

    printf("Total arrecadado: %2.f Reais \n\n", total);

    return 0;
}