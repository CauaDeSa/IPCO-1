#include <stdio.h>

int main()
{
    int N, result = 0, x = 0;

    scanf("%d", &N);

    N = N * N;

    while (N != result)
    {
        if ((x % 2) != 0)
            result += x;

        x++;
    }
    
    printf("%d\n", result);
    
    return 0;
}