#include <stdio.h>
 
int define_seconds(int days, int hours, int minutes, int seconds);
void total_time(int x);

int main() {
 
    int days, hours, minutes, seconds;
    int input1, input2;
    char palavra[3], symbol[2];

    scanf("%s%d", &palavra, &days);
    scanf("%d%s%d%s%d", &hours, &symbol, &minutes, &symbol, &seconds);

    input1 = define_seconds(days, hours, minutes, seconds);

    scanf("%s%d", &palavra, &days);
    scanf("%d%s%d%s%d", &hours, &symbol, &minutes, &symbol, &seconds);

    input2 = define_seconds(days, hours, minutes, seconds);

    seconds = input2 - input1;

    total_time(seconds);

    return 0;
}

int define_seconds(int days, int hours, int minutes, int seconds){

    days = days * 24;
    hours = hours + days;
    minutes = minutes + (hours * 60); 
    seconds = seconds + (minutes * 60);

    return seconds;
}

void total_time(int x){
    int days, hours, minutes, seconds;

    seconds = x % 60;
    minutes = (x / 60) % 60;

    hours = ((x / 60) / 60) % 24;
    days = ((x / 60) / 60) / 24;
    
    printf("%d Dia(s)\n%d Hora(s)\n%d Minuto(s)\n%d Segundo(s)\n", days, hours, minutes, seconds);
}