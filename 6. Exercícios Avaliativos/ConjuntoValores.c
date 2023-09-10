#include <stdio.h>

float crescencia(float a, float b, float c);
float decrescencia(float a, float b, float c);
float entrenumeros(float a, float b, float c);
void condicoes(int i, float a, float b, float c);

int main()
{
    int i;
    float a, b, c;

    printf("\nDigite quatro valores: ");
    scanf("%d%f%f%f", &i, &a, &b, &c);

    condicoes(i, a, b, c);

    return 0;
}

void condicoes(int i, float a, float b, float c){

    if (i == 1)
        crescencia(a, b, c);
    
    else
    {
        if (i == 2)
            decrescencia(a, b, c);

        else
           entrenumeros(a, b, c);                    
    }

    return 0;
}

float crescencia(float a, float b, float c){

    if ((a >= b) && (a >= c))
    {
        if (b >= c)
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, b, a);
        
        else
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", b, c, a);
    }

    else
    {
        if ((b >= a) && (b >= c))
        {
            if (a >= c)
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, a, b);
            
            else
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", a, c, b);
        }
        
        else
        {
            if ((c >= a) && (c >= b))
            {
                if (a >= b)
                    printf("\nOrdem: %.1f, %.1f e %1f\n\n", b, a, c);
                
                else
                    printf("\nOrdem: %.1f, %.1f e %1f\n\n", a, b, c);
            }
        }
    }
}

float decrescencia(float a, float b, float c){
    if ((a >= b) && (a >= c))
    {
        if (b >= c)
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", a, b, c);
        
        else
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", a, c, b);
    }

    else
    {
        if ((b >= a) && (b >= c))
        {
            if (a >= c)
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", b, a, c);
            
            else
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", b, c, a);
        }
        
        else
        {
            if ((c >= a) && (c >= b))
            {
                if (a >= b)
                    printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, a, b);
                
                else
                    printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, b, a);
            }
        }
    }
}

float entrenumeros(float a, float b, float c){
    if ((a >= b) && (a >= c))
    {
        if (b >= c)
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", b, a, c);
        
        else
            printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, a, b);
    }

    else
    {
        if ((b >= a) && (b >= c))
        {
            if (a >= c)
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", a, b, c);
            
            else
                printf("\nOrdem: %.1f, %.1f e %.1f\n\n", c, b, a);
        }
        
        else
        {
            if ((c >= a) && (c >= b))
            {
                if (a >= b)
                    printf("\nOrdem: %.1f, %.1f e %.1f\n\n", a, c, b);
                
                else
                    printf("\nOrdem: %.1f, %.1f e %.1f\n\n", b, c, a);
            }
        }
    }
}