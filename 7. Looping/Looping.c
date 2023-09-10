#include <stdio.h>

void looping(int x);

int main(){
    int valor;

    scanf("%d", &valor);

    looping(valor);

    return 0;
}

void looping(int x){
    if(x != 0)
    {
        looping(x-1);
        printf("%d", x);
    }
}