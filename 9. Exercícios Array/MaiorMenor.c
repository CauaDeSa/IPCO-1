#include <stdio.h>

int main()
{
    float array[5];
    int indice = 0, maior, menor;

    do{
        printf("Digite um número: ");
        scanf("%f", &array[indice]);
        
        indice++;

    } while (indice != 5);

    maior = 0;
    menor = 0;

    for (indice = 1; indice != 5; indice++)
    {
        if (array[indice] > array[maior])
            maior = indice;
    }

    for (indice = 1; indice != 5; indice++)
    {
        if (array[indice] < array[menor])
            menor = indice;
    }
    
    printf("Maior valor: %.0f na posição: %d\n", array[maior], maior);
    printf("Menor valor: %.0f na posição: %d\n", array[menor], menor);
    
    return 0;
}