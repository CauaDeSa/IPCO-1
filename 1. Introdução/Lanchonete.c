#include <stdio.h>

int main (){
    int sanduíches;
    float presunto, queijo, hamburguer;
    
    printf("Quantos sanduíches deverão ser feitos?: \n");
    scanf("%d", &sanduíches);
    
    presunto = 0.05 * sanduíches;
    queijo = 0.1 * sanduíches;
    hamburguer = 0.1 * sanduíches;

    printf("Presunto necessário: %2.f KG. \nQueijo necessário: %2.f KG. \nHamburguer necessário: %2.f KG. \n", presunto, queijo, hamburguer);
    
    return 0;
}