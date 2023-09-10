#include <stdio.h>

int main(){
    int nro = 1, N;

    scanf("%d", &N);

    while (N != 0)
    {
        printf("%d ", nro++);
        printf("%d ", nro++);
        printf("%d ", nro++);
        printf("PUM\n");
        nro++;
        N--;
    }
    
    return 0;
}