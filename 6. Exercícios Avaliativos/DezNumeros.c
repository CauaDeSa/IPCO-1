#include <stdio.h>

int maior(int a, int b, int c);

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    int maior1, maior2, maior3, result;

    printf("\n\nDigite 10 números inteiros: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    maior1 = maior(a, b, c);
    maior2 = maior(d, e, f);
    maior3 = maior(g, h, i);
    result = maior(maior1, maior2, maior3);

    printf("Maior número entre os digitados: %d\n\n", maior(result, j, 0));

    return 0;
}

int maior(int a, int b, int c){
    int troca;

    if ((a > b) && (a > c))
        return a;

    else
    {
        if ((b > a) && (b > c))
            return b;

        else
           return c;
    }
}