#include <stdio.h>

int validator(int a, int b);
int par(int a, int b);

int main()
{
    int a, b;

    printf("\nDigite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    if (validator(a, b) == 1)
    {
        if (par(a, b) == 1)
            printf("\nSim!\n\n");

        else
            printf("\nNão!\n\n");
    }
    
    else
        printf("\nNúmeros não positivos!\n\n");

    return 0;
}

int validator(int a, int b){
    if ((a >= 0) && (b >= 0))
        return 1;

    else
        return 0;
}

int par(int a, int b){

    if ((a % 2) == 0 && (b % 2) == 0)
        return 1;

    else
        return 0;
    
}