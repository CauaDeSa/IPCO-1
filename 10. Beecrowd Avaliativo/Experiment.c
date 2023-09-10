#include <stdio.h>

void test_amount(int tests, int values[]);

int main()
{
    int values[3] = {0, 0, 0};
    int tests;
    float percent_coelho, percent_rato, percent_sapo, total;

    scanf("%d", &tests);

    test_amount(tests, values);
    
    total = values[1] + values[2] + values[3];

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, values[1], values[2], values[3]);
    
    percent_coelho = (values[1] * 100) / total;
    percent_rato = (values[2] * 100) / total;
    percent_sapo = (values[3] * 100) / total;

    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percent_coelho, percent_rato, percent_sapo);

    return 0;
}

void test_amount(int tests, int values[]){
    
    int input_amount;
    char input_type;

    while (tests != 0)
    {
        scanf("%d %c", &input_amount, &input_type);

        switch (input_type)
        {
        case 'C' :
            values[1] += input_amount;
            break;

        case 'R' :
            values[2] += input_amount;
            break;
        
        case 'S' :
            values[3] += input_amount;
            break;

        default:
            break;
        }
        
        tests--;
    }
}