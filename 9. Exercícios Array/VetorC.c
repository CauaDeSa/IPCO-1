#include <stdio.h>

int main(){
 
    int x = 0;
    int A[7], B[5], C[12], rpt;

    x = 7;
    
    for (rpt = 0; rpt != x; rpt++)
    {
        scanf("%d", &A[rpt]);
        C[rpt] = A[rpt];
    }

    x = 5;

    for (rpt = 0; rpt != x; rpt++)
    {
        scanf("%d", &A[rpt]);
        C[rpt + 7] = A[rpt];
    }
     
    x = 12;

    for (rpt = 0; rpt != x; rpt++)
        printf("%d\n", C[rpt]);

    return 0;
}