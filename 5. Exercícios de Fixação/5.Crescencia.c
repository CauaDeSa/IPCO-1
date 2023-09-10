#include <stdio.h>

void equacao(float A, float B, float C);

int main(){
    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);    

    system("cls || clear");

    Equacao(A, B, C); 

    return 0;
}

void equacao(float A, float B, float C){
    
    //A maior que todos
    if (A <= B && A <= C)
    {
        if (B <= C)
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", A, B, C);
        
        else 
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", A, C, B);
    }
    
    //B maior que todos 
    if (B <= A && B <= C)
    {
          if (A <= C)
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", B, A, C);
        
        else 
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", B, C, A);
    }
     
    //C maior que todos
    if (C <= B && C <= A)
    {
        if (B <= A)
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", C, B, A);
        
        else 
            printf("\n\n%.1f > %.1f > %.1f\n\n\n", C, A, B);
    }
}
  