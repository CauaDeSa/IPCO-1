#include <stdio.h>
#include <time.h>

int sorteio();

int main()
{
    int n, arg;
    int maior, menor;

    maior = menor = 0;

    scanf("%d", &n);

    srand( (unsigned) time (NULL) );
    
    while (n-- > 0)
    {   
        arg = sorteio();

        printf("%d\n", arg);

        if (arg > 0)
        {  

            if (menor == 0)
                menor = arg;

            if (arg < menor)
                menor = arg;
        }

        else
        {
            if (maior == 0)
                maior = arg;
            
            if (maior < arg)
                maior = arg;
        }
    }
    
    printf("Maior negativo: %d\nMenor positivo: %d\n", maior, menor);

    return 0;
}

int sorteio(){
    int arg;

    arg = rand() % 100000;
    arg -= 50000;

    return arg;
}