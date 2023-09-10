#include <stdio.h>
#define OCUPADO 1
#define VAZIO -1

int batata_quente(int n, int k);

int main()
{
    int n;

    printf("Quantidade de crianças: ");
    scanf("%d", &n);

    int k;

    printf("Repetição: ");
    scanf("%d", &k);

    printf("Criança vencedora na cadeira %d\n", batata_quente(n, k));

    return 0;
}

int batata_quente(int n, int k){
    int array_circular[n];
    int qtd_criancas, contador, i;

    for (int i = 0; i != n; i++)
        array_circular[i] = OCUPADO;

    qtd_criancas = n;
    i = -1;

    while (qtd_criancas != 0)
    {
        for (contador = 0; contador != k;)
        {
            if (array_circular[i] == OCUPADO)
                contador++;
            
            i = i + 1;

            if (i == n)
                i = 0;
        }

        array_circular[i] = VAZIO;
        qtd_criancas--;
    }

    return i + 1;
}