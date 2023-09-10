#include <stdio.h>
 
void consecutive(int x, int y);

int main() {
 
    int x, y;

    scanf("%d%d", &x, &y);

    while (x > 0 && y > 0)
    {   
        consecutive(x, y);
        scanf("%d%d", &x, &y);
    }
 
    return 0;
}

void consecutive(int x, int y){
    int troca, sum = 0;

    if (x < y)
    {
        troca = y;
        y = x;
        x = troca;
    }

    while (x >= y)
    {
        printf("%d ", y);
        sum += y;
        y++;
    }
    
    printf("Sum=%d\n", sum);
}