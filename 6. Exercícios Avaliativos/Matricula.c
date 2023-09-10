#include <stdio.h>

void mensagens(int matricula);

int main()
{
    int matricula;

    scanf("%d", &matricula);

    divisoes(matricula);
    return 0;
}

void divisoes(int matricula){
    int ano, semestre, ordem;

    ano = matricula / 100000;
    matricula = matricula % 100000;

    if ((ano > 01) && (ano < 24))
        printf("\nAluno matriculado no ano de 20%d\n", ano);
    
    else
    {
        if (ano == 00)
            printf("\nAluno matriculado no ano de: 200%d\n", ano);

        else
            printf("\nAluno matriculado no ano de: 19%d\n", ano);
    }

    semestre = matricula / 10000;
    matricula = matricula % 10000;

    printf("No semestre: %d\n\n", semestre);

    return 0;
}