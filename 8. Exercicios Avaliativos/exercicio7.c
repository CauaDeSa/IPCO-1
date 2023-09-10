#include <stdio.h>

int validator(int n);

int main()
{
    int rpt = 0, n;
    int max, min;
    
    while (rpt < 15)
    {
        do{
            printf("Digite %d° número : ", rpt + 1);
            scanf("%d", &n);

        } while (n < 1 || n > 1000);

        if (n == 0)
        {
            max = n;
            min = n;
        }

        if (n > max)
            max = n;
        
        if (n < min)
            min = n;

        rpt++;
    }

    printf("Maior: %d\nMenor: %d\n", max, min);
    
    return 0;
}

int validator(int x){
    if ((x < 1000) || (x > 0))
        return 1;

    else
        return 0;
}