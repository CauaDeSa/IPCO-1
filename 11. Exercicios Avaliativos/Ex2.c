#include <stdio.h>

int fastest_slug(int group);

int main()
{
    int group, x;

    printf("Quantidade de lesmas: ");
    scanf("%d", &group);

    x = fastest_slug(group);

    if(x < 10)
        printf("Nível 1\n");

    else
    {
        if (x >= 10 && x < 20)
            printf("Nível 2\n");

        else
            printf("Nível 3\n");        
    }
    
    return 0;
}

int fastest_slug(int group){
    int i, fastest, speed;

    fastest = 0;

    for (i = 0; i < group; i++)
    {   
        printf("Velocidade da %d° (cm/h): ", (i + 1));
        scanf("%d", &speed);

        if (i == 0)
            fastest = speed;
        
        else
        {
            if (speed > fastest)
                fastest = speed;            
        }
    }

    return fastest;
}