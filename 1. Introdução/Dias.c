#include <stdio.h>

int main(){
    int dias, dias2, meses, anos;

    printf("\nQuantos dias se passaram sem acidentes?: ");
    scanf("%d", &dias);

    dias2 = dias % 30;
    meses = dias / 30;
    anos = meses / 12;
    meses = meses % 12;

    printf("\nTempo sem acidentes: %d anos, %d meses e %d dias. \n\n", anos, meses, dias2);

    return 0;
}
