#include <stdio.h>
#include <math.h>
 
int main() {

    float i = 0, j = 1;
    int x, y;

    while (i < 2.2)
    {   
        x = 10 * floor(i);
        y = 10 * i;

        if (y == x)
        {
            printf("I=%.0lf J=%.0lf\n", i, j);
            printf("I=%.0lf J=%.0lf\n", i, j + 1);
            printf("I=%.0lf J=%.0lf\n", i, j + 2);
        }

        else{
            printf("I=%.1lf J=%.1lf\n", i, j);
            printf("I=%.1lf J=%.1lf\n", i, j + 1);
            printf("I=%.1lf J=%.1lf\n", i, j + 2);
        }

        j = j + 0.2;
        i = i + 0.2;
    }
 
    return 0;
}