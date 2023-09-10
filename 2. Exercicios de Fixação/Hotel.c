#include <stdio.h>

int main(){
    float diaria, ap, taxaProm, ocupMedia, ocupAlmejada, diariaProm, dif, ocup22, ocupMedia2, comProm;

    printf("\n\nQual o valor da diária?: ");
    scanf("%f", &diaria);

    printf("Quantos apartamentos possui o hotel?: ");
    scanf("%f", &ap);

    taxaProm = 0.22;
    ocupMedia = 0.4; 
    ocupAlmejada = 0.7;

    diariaProm = (diaria * taxaProm);

    taxaProm = diaria - diariaProm;    

    // taxaProm = valor reajustado ------------------------------------//

    ocupMedia2 = ((ap * ocupMedia) * diaria) * 30;

    // valor sem promoção //

    ocupAlmejada = ((ap * ocupAlmejada) * taxaProm) * 8;

    // finais de semana com promoção //

    ocup22 = ((ap * ocupMedia) * diaria) * 22;

    // dias normais do mês //
    comProm = (ocupAlmejada + ocup22);

    dif= comProm - ocupMedia2;

    printf("\nValor da diária no dia da promoção?: %.2f reais.\n\n", taxaProm);

    printf("Valor médio da arrecadação durante um mês sem promoção?: %.2f reais.\n\n", ocupMedia2);

    printf("Valor médio da arrecadação durante um mês com promoção?: %.2f reais.\n\n", comProm);

    printf("lucro ou prejuízo com a promoção: %.2f reais\n\n", dif);

    return 0;
}