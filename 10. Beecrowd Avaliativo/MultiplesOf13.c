#include <stdio.h>

void divisible(int x, int y);

int main() {
 
    int x, y, troca;

    scanf("%d%d", &x, &y);

    if (x < y)
    {
        troca = x;
        x = y;
        y = troca;
    }
    
    divisible(x, y);
 
    return 0;
}

void divisible(int x, int y){
    
    int sum = 0;

    while (y != (x + 1))
    {
        if (y % 13 != 0)
            sum += y;

        y++;
    }
    
    printf("%d\n", sum);
}