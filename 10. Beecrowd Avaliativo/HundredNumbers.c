#include <stdio.h>

int main(){

    int numbers[100], i = 0, maior, position;

    while (i != 100)
    {   
        scanf("%d", &numbers[i]);
        i++;
    }

    i = 1;
    position = 0;

    while (i != 100)
    {   
        if (numbers[i] > numbers[position])
        {
            maior = numbers[i];
            position = i;
        }

        i++;
    }
    
    printf("%d\n%d\n", maior, position + 1);

    return 0;
}