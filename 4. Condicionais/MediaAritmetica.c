#include <stdio.h>

int validator(int v);
float mediaritmetica(int a, int b, int c, int d);

int main(){
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    a = validator(a);

    b = validator(b);

    c = validator(c);

    d = validator(d);

    if (mediaritmetica(a, b, c, d) != 0) 
        printf("\nMédia aritmética: %.1f\n\n", mediaritmetica(a, b, c, d));
    
    else
        printf("Não há números pares!\n\n");
}

int validator(int v){
    if ( v % 2 == 0 )
        return v;

    else 
        return 0;

}

float mediaritmetica(int a, int b, int c, int d){
    float media;
    int n = 0;

    if (a != 0)
        n = n + 1;

    if (b != 0)
        n = n + 1;

    if (c != 0)
        n = n + 1;

    if (d != 0)
        n = n + 1;

    if (n == 0)
        return 0;

    else
        return media = (a + b + c + d) / n;
}