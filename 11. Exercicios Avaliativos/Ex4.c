#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int verify(int vetor[], int max, int chave);
int preencher_vetor(int vetor[]);

int main()
{   
    //Esse vetor de 1 milhão nem roda no meu pc, mas fiz o teste com 100000 e rodou//
    int numeros_aleatorios[1000000];
    int chave, posicao;

    //max foi definido como 1 para o código efetuar a busca de forma crescente no vetor//
    int max = 1;

    srand ( (unsigned) time (NULL) );

    preencher_vetor(numeros_aleatorios);

    //scanf("%d", &chave);//
    chave = numeros_aleatorios[0];

    //printf("A chave é: %d\n", chave);//

    posicao = verify(numeros_aleatorios, max, chave);

    if (posicao > -1)
        printf("A chave foi encontrada na posição: %d\n", posicao);

    else
        printf("A chave não foi encontrada\n");

    return 0;
}

int preencher_vetor(int vetor[]){
    int i;

    for (i = 0; i < 1000000; i++)
        vetor[i] = rand();
        //printf("N°%d: %d\n", i, vetor[i]);//

    return 0;
}

int verify(int vetor[], int max, int chave){

    if (max > 999999)
        return -1;

    else
    {
        if (vetor[max] == chave)
            return max;

        else
            return verify(vetor, (max + 1), chave);
    }
}