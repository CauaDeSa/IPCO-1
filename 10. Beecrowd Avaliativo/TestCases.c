#include <stdio.h>

int main()
{
    int times, i = 0;
    float n1, n2, n3, result;

    scanf("%d", &times);

    while (i < times)
    {
        scanf("%f%f%f", &n1, &n2, &n3);
        result = (2 * n1) + (3 * n2) + (5 * n3);
        result = result / 10;
        printf("%.1f\n", result);
        i++;
    }
    
    return 0;
}
