#include <stdio.h>

int main()
{
    int base1, base2, expoente;

    printf("\nDigite a base: ");
    scanf("%d", &base1);

    base2 = base1;

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    while (expoente-- != 1)
        base2 = base2 * base1;
    
    printf("\nNúmero obtido: %d\n\n", base2);

    return 0;
}