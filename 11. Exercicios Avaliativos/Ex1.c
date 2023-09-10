#include <stdio.h>

int gerar_vetor(double vetor[]);

int main()
{   
    double vetor[500];
    int n;

    gerar_vetor(vetor);

    scanf("%d", &n);

    while (n != 0)
    {
        printf("Termo %d: %0.lf\n", n, vetor[n - 1]);
        scanf("%d", &n);
    }
    
    return 0;
}

int gerar_vetor(double vetor[]){

    int i;
    double valor1, valor2, troca;

    vetor[0] = valor1 = 0;
    vetor[1] = valor2 = 1;

    for (i = 2; i < 500; i++)
    {   
        troca = valor1;
        valor1 = valor2;
        valor2 = valor1 + troca;

        vetor[i] = valor2;
    }
    
    return 0;
}