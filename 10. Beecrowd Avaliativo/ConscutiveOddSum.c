#include <stdio.h>
 
int oddsum(int x, int y);

int main() {
 
    int amount, x, y;

    scanf("%d", &amount);

    while (amount != 0)
    {
        scanf("%d%d", &x, &y);
        printf("%d\n", oddsum(x, y));
        amount--;
    }
    
    return 0;
}

int oddsum(int x, int y){
    
    int troca, sum = 0; 

    if (x < y)
    {
        troca = x;
        x = y;
        y = troca;
    }

    while ((x - 1) >= (y + 1))
    {
        y++;

        if (y % 2 != 0)
            sum += y;
    }

    return sum;
}