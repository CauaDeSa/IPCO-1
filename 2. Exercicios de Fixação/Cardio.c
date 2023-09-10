#include <stdio.h>

int main(){
    int anos, total;
    
    printf("\nQuantos anos você tem?: ");
    scanf("%d", &anos);
    
    total = (365.25 * 24 * 60 * 60);
    total =  total * anos;
    
    printf("\nQuantidade de batimentos: %d batimentos.\n\n", total);

    return 0;
}