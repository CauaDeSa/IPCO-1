#include <stdio.h> 

void Aprovado(float Media);
void Recuperacao(float Media);
void Reprovado(float Media);

int main(){
    float NotaA, NotaB, NotaC, NotaD, Media;
    
    scanf("%f%f%f%f", &NotaA, &NotaB, &NotaC, &NotaD);
    
    Media = (NotaA + NotaB + NotaC + NotaD) / 4;

    Aprovado(Media);
    Recuperacao(Media);
    Reprovado(Media); 
}

void Aprovado(float A){
    
    if (A >= 7.0)
        printf("APROVADO!\n");
}

void Recuperacao(float A){
    
    if (A >= 5.0)
        if (A < 7)
            printf("RECUPERAÇÃO\n");    
}

void Reprovado(float A){
    
    if (A < 5.0)
        printf("REPROVADO!\n");
}