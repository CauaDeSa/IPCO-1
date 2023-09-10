#include <stdio.h>

int div2(int n);
int div3(int n);

int main()
{
    int m, n, troca;
    int ambos = 0;

    scanf("%d%d", &m, &n);

    if (m < n)
    {
        troca = m;
        m = n;
        n = troca;
    }

    while (n != m + 1)
    {
        if (div2(n))
        {
            if(div3(n))
                ambos += 1;
        }

        n++;
    }
    
    printf("\nExistem %d numeros divisiveis por 2 e por 3 neste intervalo.\n", ambos);
    
    return 0;
}

int div2(int n){
    if (n % 2 == 0)
        return 1;

    else
        return 0;
}

int div3(int n){
    if (n % 3 == 0)
        return 1;

    else
        return 0;
}