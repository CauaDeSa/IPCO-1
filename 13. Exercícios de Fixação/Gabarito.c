#include <stdio.h>

void gabarito_aluno(char vetor_alunos[], char vetor_gabarito[], int vetor_respostas[], int index);
void print_alunos(int vetor_respostas[], int n);

int main(){

    int n, index, acertos, erros, aluno;
    char quest;
    char vetor_gabarito[4], vetor_alunos[4];

    acertos = erros = index = aluno = 0;

    printf("\n-----GABARITO-----\n\n");

    for (int i = 0; i < 4; i++)
    {   
        printf("Questão[%d] = ", i + 1);
        scanf(" %c", &quest);
        vetor_gabarito[i] = quest;
    }

    printf("\nQuantos alunos serão avaliados? ");
    scanf("%d", &n);

    n = n * 2; 

    printf("%d\n", n);

    char vetor_respostas[n];

    printf("\n-----RESPOSTAS DOS ALUNOS-----\n\n");

    while (n != index)
    {
        printf("%d\n", index);
        
        printf("\nAluno[%d]: \n", ++aluno);
        gabarito_aluno(vetor_alunos, vetor_gabarito, vetor_respostas, index);

        index += 2;
    }

    printf("\n-----RELAÇÃO ALUNOS-----\n\n");

    print_alunos(vetor_respostas, n);

    return 0;    
}

void gabarito_aluno(char vetor_alunos[], char vetor_gabarito[], int vetor_respostas[], int index){
    int erros, acertos;
    char quest;

    erros = acertos = 0;

    for (int i = 0; i < 4; i++)
    {       
        printf("Resposta[%d]: ", i + 1);
        scanf(" %c", &quest);
        vetor_alunos[i] = quest;

        if (vetor_alunos[i] == vetor_gabarito[i])
            acertos++;

        else
            erros++;
    }

    vetor_respostas[index] = acertos;
    vetor_respostas[index + 1] = erros;
}

void print_alunos(int vetor_respostas[], int n){
    int i = 0, hehe = 1;

    while (i != n)
    {
        printf("Aluno[%d]: %d acertos e %d erros. \n", hehe, vetor_respostas[i], vetor_respostas[i + 1]);
        i += 2;

        hehe++;
    } 
}