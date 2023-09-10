#include <stdio.h>
 
double validator(double n);
int validator2(int r);
void average(double x, double y);

int main() {
 
    double x, y;
    int restart = 1;

    while (restart-- == 1)
    { 
        scanf("%lf", &x);
        x = validator(x);

        scanf("%lf", &y);
        y = validator(y);

        average(x, y);

        restart = validator2(restart);
    }   

    return 0;
}

double validator(double n){
    
    while (n < 0 || n > 10)
    {
        printf("nota invalida\n");
        scanf("%lf", &n);        
    }   
    
    return n;
}

void average(double x, double y){
    double sum;

    sum = (x + y) / 2;

    printf("media = %.2lf\n", sum);
}

int validator2(int r){

    while ((r > 2) || (r < 1))
    {
        printf("novo calculo (1-sim 2-nao) ");
        scanf("%d", &r);
    }

    if (r == 1)
        return 1;
    
    else
        return 0;
}