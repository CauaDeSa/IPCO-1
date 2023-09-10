#include <stdio.h>

int main()
{
    int numeros[15], rpt;

    for (rpt = 0; rpt != 15; rpt++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[rpt]);
    }

    for (rpt = 0; rpt != 15; rpt++)
    {
        if (numeros[rpt] % 2 == 0)
            printf("%d\n", rpt);
    }
    
    return 0;
}