#include <stdio.h>

float operacao(char o, float n1, float n2);

int main(){
    float n1, n2;
    char op; 
    
    printf("\nSeja Bem Vindo! \n\n");
    
    scanf("%f", &n1);
    scanf(" %c", &op);
    scanf("%f", &n2);
    
    system("cls || clear");

    printf("%.1f\n\n", operacao(op, n1, n2));
    
    return 0;
}

float operacao(char op, float n1, float n2){
    
    switch (op)
    {
        case '+':
            return n1 + n2;
        break; 
        
        case '-' :
            return n1 - n2;
        break;
        
        case '*' :
            return n1 * n2;
        break;
        
        case '/' :
            return n1 / n2;
        break;  
        
        default:
            printf("Operação não compreendida!");
    }
}