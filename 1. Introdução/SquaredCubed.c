#include <stdio.h>

int main (){
    int number, squared, cubed;
    
    printf("\nEscreva um número: ");
    scanf("%d", &number);
    
    squared = number * number;
    cubed = number * number * number;

    printf("\nAo quadrado: %d \nAo Cubo: %d\n\n", squared, cubed);

    return 0;
}