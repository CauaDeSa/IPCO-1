#include <stdio.h>

int negacao(int x, int negativo);
int posicao(int x, int positivo);

int main()
{
    int n, x;
    int negativo = -2147483647;
    int positivo = 2147483647;

    scanf("%d", &n);

    while (n != 0)
    {
        scanf("%d", &x);

        if (x < 0)
            negativo = negacao(x, negativo);
        
        else
            positivo = posicao(x, positivo);

        n--;
    }
    
    printf("O maior valor negativo é: %d\nO menor valor positivo é: %d\n\n", negativo, positivo);

    return 0;
}

int negacao(int x, int negativo){
    if (x > negativo)
        return x;

    else
        return negativo;
}

int posicao(int x, int positivo){
    if (x < positivo)
        return x;
    
    else
        return positivo;
}