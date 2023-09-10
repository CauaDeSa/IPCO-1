#include <stdio.h>

int validator(dia, mes);
void semestreatual(int dia, int mes);

int main()
{
    int dia, mes;

    printf("\nNo formato: 20 03\nDigite o dia e o mês: ");
    scanf("%d%d", &dia, &mes);

    validator(dia, mes);

    if (validator(dia, mes) == 1)
        semestreatual(dia, mes);
    
    else
        printf("\nData inválida!\n\n");

    return 0;
}

int validator(int dia, int mes){

    if ((dia >= 0) && (dia <= 30))
    {
        if ((mes >= 1) && (mes <= 12))
            return 1;
        
        else
            return 0;
    }

    else 
        return 0;
}

void semestreatual(int dia, int mes){
    int faltam;

    if (mes >= 8)
        printf("\nVocê está no segundo semestre!\n\n");
    
    else
    {
        dia = (mes * 30) + dia;

        faltam = 240 - dia;

        printf("\nFaltam %d dias completos para que o segundo semestre comece!\n\n", faltam);
    }
}