#include <stdio.h>

int validator(int hora);
int manha(int hora);
int tarde(int hora);
int noite(int hora);

int main()
{
    int hora;

    printf("\nDigite uma hora: ");
    scanf("%d", &hora);

    if (validator(hora))
    {   
        if (manha(hora))
            printf("\nManhã\n\n");

        else
        {
            if (tarde(hora))
                printf("\nTarde\n\n");
            
            else
            {
                if (noite(hora))
                    printf("\nNoite\n\n");
                
                else
                    printf("\nMadrugada\n\n");
            }
        }
    }

    else
        printf("\nDigite uma hora entre 0 e 23!\n\n");

    return 0;
}

int validator(int hora){
    if ((hora >= 0) && (hora <= 23))
        return 1;

    else
        return 0;
}

int manha(int hora){
    if ((hora >= 6) && (hora <= 11))
        return 1;

    else
        return 0;
}

int tarde(int hora){
    if ((hora >= 12) && (hora <= 17))
        return 1;

    else
        return 0;
}

int noite(int hora){
    if ((hora >= 18) && (hora <= 23))
        return 1;

    else
        return 0;
}