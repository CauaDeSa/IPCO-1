#include <stdio.h>
 
int main() {
    
    int x = 0, y = 1, n, holder, i = 0;
    
    scanf("%d", &n);

    while (n != i)
    {
        if (i == 0)
            printf("%d", x);
        
        else
            printf(" %d", x);    

        holder = x;
        x = y;
        y += holder;

        i++;
    }

    printf("\n");

    return 0;
}