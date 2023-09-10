#include <stdio.h>
#include <math.h>

int main(){
    float arit, quadr, harm;
    int a, b, c, d;
    
    printf("Qual a nota a?: ");
    scanf("%d", &a);
    
    printf("Qual a nota b: ");
    scanf("%d", &b);
    
    printf("Qual a nota c: ");
    scanf("%d", &c);
    
    printf("Qual a nota d: ");
    scanf("%d", &d);
    
    arit = ((a + b + c + d) / 4);
    quadr = sqrt(((a * a) + (b * b) + (c * c) + (d * d)) / 4);
    harm = (4 / ((1 / a) + (1 / b) + (1 / c) + (1 / d)));
    
    return 0;
}