#include <stdio.h>

int main(){
    int a, b, temporária;

    printf("\nDigite Valores de A e B: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    temporária = a;
    a = b;
    b = temporária; 

    printf("\nA: %d \nB: %d\n\n", a, b);

    return 0;
}