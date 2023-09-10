#include <stdio.h>

int numeros(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("\nNúmero de três dígitos: %d\nNúmero de quatro dígitos: %d\n\n", n, numeros(n));

    return 0;
}

int numeros(int n){
    int nro, primeiro, segundo, terceiro;

    //números separados por casas//
    primeiro = n / 100;
    nro = n % 100;

    segundo = nro / 10;
    nro = nro % 10;

    terceiro = nro / 1;

    //numero definitivo//
    n = n * 10;

    //equação//
    return n + ((primeiro + (segundo * 3) + (terceiro * 5)) % 7);
}