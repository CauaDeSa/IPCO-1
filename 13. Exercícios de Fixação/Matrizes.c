#include <stdio.h>

void preencher_matriz(int matriz_identidade[][5]);
void input_matriz(int matriz_input[][5]);
void verify(int matriz_identidade[][5], int matriz_input[][5]);

int main(){

    int matriz_identidade[5][5], matriz_input[5][5];
    int linha, coluna;

    preencher_matriz(matriz_identidade);

    input_matriz(matriz_input);

    verify(matriz_identidade, matriz_input);

    return 0;
}

void preencher_matriz(int matriz_identidade[][5]){
    int linha, coluna; 

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            if (linha == coluna)
                matriz_identidade[linha][coluna] = 1;
            
            else
                matriz_identidade[linha][coluna] = 0;
        }
    }
}

void input_matriz(int matriz_input[][5]){
    int linha, coluna, n;

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {     
            scanf("%d", &n);
            matriz_input[linha][coluna] = n;
        }

        printf("\n");
    }
}

void verify(int matriz_identidade[][5], int matriz_input[][5]){
    int linha, coluna, igualdade = 0;

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {           
            if (matriz_identidade[linha][coluna] == matriz_input[linha][coluna])
                igualdade++;
        }
    }

    if (igualdade == 25)
        printf("É uma matriz identidade!\n");

    else
        printf("Não é uma matriz identidade.\n");    
}