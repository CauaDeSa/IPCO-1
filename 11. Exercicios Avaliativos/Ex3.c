#include <stdio.h>
#define MAX 100

void moda(int dados[]);

int main()
{
    int resposta[MAX] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7, 7};

    moda(resposta);

    return 0;
}

void moda(int dados[]){
    int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int maior, j;

    for (int i = 0; i < 100; i++)
    {
        switch (dados[i])
        {
        case 0:
            vetor[0] += 1;
            break;

        case 1:
            vetor[1] += 1;
            break;
        
        case 2:
            vetor[2] += 1;
            break;

        case 3:
            vetor[3] += 1;
            break;

        case 4:
            vetor[4] += 1;
            break;
        
        case 5:
            vetor[5] += 1;
            break;

        case 6:
            vetor[6] += 1;
            break;
        
        case 7:
            vetor[7] += 1;
            break;
        
        case 8:
            vetor[8] += 1;
            break;

        case 9:
            vetor[9] += 1;
            break;
            
        default:
            break;
        }
    }

    maior = vetor[0];
    j = 0;

    for (int i = 1; i < 10; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
            j = i;
        }
    }

    printf("a moda é %d, que ocorreu: %d vezes.\n", j, maior);
}