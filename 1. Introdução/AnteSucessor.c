#include <stdio.h>

int main (){
    int número, sucessor, antecessor;

    printf("\nDigite um número: ");
    scanf("%d", &número);
    
    sucessor = número + 1;
    antecessor = número - 1;
    
    printf("\nAntecessor: %d \nNúmero: %d \nSucessor: %d \n\n", antecessor, número, sucessor);

    return 0;
}