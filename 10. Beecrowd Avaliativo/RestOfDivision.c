#include <stdio.h>
 
void division(int x, int y);

int main() {
 
    int x, y, troca;

    scanf("%d%d", &x, &y);

    if (x < y)
    {
        troca = x;
        x = y;
        y = troca;
    }

    division(x, y);    
 
    return 0;
}

void division(int x, int y){

    while ((x - 1) != y++)
    {
        if (y % 5 == 2 || y % 5 == 3)
            printf("%d\n", y);
    }
}