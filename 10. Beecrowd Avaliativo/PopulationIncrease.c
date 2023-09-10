#include <stdio.h>
 
void input();
double result(int a, double g1, int b, double g2);
void message(int x);

int main() {
 
    int t;

    scanf("%d", &t);
    
    while (t > 0)
    {
        input();
        t--;
    }

    return 0;
}

void input(){
    int a, b;
    double g1, g2, total;

    scanf("%d%d", &a, &b);
    
    scanf("%lf%lf", &g1, &g2);

    g1 = g1 / 100;
    g2 = g2 / 100;

    printf("(a = %d,  g1 = %lf, g2 = %lf\n", a, g1, g2);

    total = result(a, g1, b, g2);

    printf("total: %lf\n", total);

    message(total);
}

double result(int a, double g1, int b, double g2){
    int years = 0;
    double diff, i;
         
    diff = g1 - g2;

    printf("%lf\n", diff);

    i = a;

    while (i < b || years < 101)
    {
        i += a * diff;
        years++;
        printf("%lf\n", i);
    }

    printf("porcento: %lf (g1 = %lf, g2 = %lf\n", diff, g1, g2);

    return years;
}

void message(int x){

    if (x > 100)
        printf("Mais de 1 seculo.\n");

    else
        printf("%d anos.\n", x);    
}