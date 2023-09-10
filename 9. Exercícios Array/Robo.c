#include <stdio.h>
 
int main(){
 
    int rpt;
    float distancia[8], tempo[8], ms;

    for (rpt = 0; rpt != 8; rpt++)
    {
        printf("Digite a distância do %d° teste: ", rpt + 1);
        scanf("%f", &distancia[rpt]);
    }
    
    for (rpt = 0; rpt != 8; rpt++)
    {
        printf("Digite o tempo do %d° teste: ", rpt + 1);
        scanf("%f", &tempo[rpt]);
    }

    for (rpt = 0; rpt != 8; rpt++)
    {
        ms = distancia[rpt] / tempo[rpt];

        printf("Teste %d: %.2f m/s\n", rpt + 1, ms);
    }
 
    return 0;
}