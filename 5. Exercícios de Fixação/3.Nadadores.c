#include <stdio.h>

void categorias(int idade);

int main(){
    int idade;
    
    scanf("%d", &idade);
    categorias(idade);
    
    return 0; 
}

void categorias(int i){
    
    if (5 <= i && i <= 7)
          printf("Categoria: A\n");
    
    if (8 <= i && i <= 10)
        if (i < 10)
            printf("Categoria: B\n");
    
    if (11 <= i && i <= 13)
        if (i < 13)
            printf("Categoria: C\n");
    
    if (14 < i && i <= 18)
        if (i <= 18)
            printf("Categoria: D\n");

    if (i > 18)
        printf("Categoria: E\n");
}