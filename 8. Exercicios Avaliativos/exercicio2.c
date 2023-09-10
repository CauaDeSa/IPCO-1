#include <stdio.h>

int amigavel(n1);

int main()
{
    int n1, amg, n2;

    scanf("%d", &n1);

    n2 = n1;

    if (amigavel(n2) != 0)
        printf("%d e %d são amigos!\n", n1, amigavel(n2--));

    else
        printf("N\n");

    return 0;
}

int amigavel(n2){
    int div = 0, n = 1;

    while (n != n2)
    {
        if((n2 % n) == 0)
            div += n;

        printf("%d %d %d\n", n2, n, div);
        
        n++;
    }
    
    return div;
}