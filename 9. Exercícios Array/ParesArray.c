#include <stdio.h>

int main()
{
    int Numero[5], rpt;

    for (rpt = 0; rpt != 5; rpt++)
    {
        printf("Digite o %d valor: ", rpt + 1);
        scanf("%d", &Numero[rpt]);
    }
    
    for (rpt = 0; rpt != 5; rpt++)
    {
        if ((Numero[rpt] % 2) == 0)
            printf("O índice %d é par: %d\n", rpt + 1, Numero[rpt]);
    }
    
    return 0;
}