#include <stdio.h>
#include <stdbool.h>

int DataValida(int dia, int mes, int ano);
int eh_bissexto(int ano);

int main()
{
    int dia, mes, ano;

    printf("\nDado o formato: dia/mês/ano\nDigite uma data: \n\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    if (DataValida(dia, mes, ano))
        printf("Data válida!\n\n");

    else
        printf("Data inválida!\n\n");
    
    return 0;
}

int DataValida(int dia, int mes, int ano){
    bool retorno = false;

    if ((ano >= 1900) && (ano <= 2200))
    {
        if ((mes >= 1) && (mes <= 12))
        {
            if (mes == 2)
            {
                if (eh_bissexto(ano)){
                    if (dia <= 29)
                        retorno = true;
                }

                else
                    if (dia <= 28)
                        retorno = true;                
            }

            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if (dia <= 31)
                    retorno = true;              
            }
            
            else
                if (dia <= 30)
                    retorno = true;
        }
    }

    return retorno;
}

int eh_bissexto(int ano){
    if ((ano % 4) == 0)
    {
        if ((ano % 100) == 0)
            return false;

        else
            return true;   
    }
    
    else
        return false;
}