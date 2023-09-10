#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[12], rpt;

    for (rpt = 0; rpt != 12; rpt++)
        scanf("%d", &num[rpt]);
    
    for (rpt = 0; rpt != 12; rpt++)
    {
        if (num[rpt] % 5 == 0)
            printf("Número: %d na posição: %d\n", num[rpt], rpt);
    }

    return 0;
}