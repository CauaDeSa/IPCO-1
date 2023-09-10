#include <stdio.h>

int main (){    
    int litros, tempo, vm, km_percorridos;
    
    printf("Quantas horas de viagem?: ");
    scanf("%d", &tempo);
    
    printf("Qual foi a velocidade média (km/h)?: ");
    scanf("%d", &vm);
    
    km_percorridos = vm * tempo;
    litros = km_percorridos / 12;
    
    printf("Velocidade média: %d km/h \nTempo gasto na viagem: %d Horas \nDistância percorrida: %d \nQuantidade de litros consumidos: %d \n", vm, tempo, km_percorridos, litros);
    
    return 0;
}