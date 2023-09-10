#include <stdio.h>

int milhar(int nro);
int centena(int nro);
int dezena(int nro);
int unidade(int nro);

int main()
{
    int nro;

    printf("Digite um valor de 0 a 9999: ");
    scanf("%d", &nro);

    printf("\nMilhar..: %d", milhar(nro));
    printf("\nCentena.: %d", centena(nro));
    printf("\nDezena..: %d", dezena(nro));
    printf("\nUnidade.: %d\n\n", unidade(nro));

    return 0;
}

int milhar(int nro){
    return nro / 1000;
}

int centena(int nro){
    nro = nro % 1000;
    return nro / 100;
}

int dezena(int nro){
    nro = nro % 1000;
    nro = nro % 100;
    return nro / 10;
}

int unidade(int nro){
    nro = nro % 1000;
    nro = nro % 100;
    nro = nro % 10;
    return nro / 1;
}