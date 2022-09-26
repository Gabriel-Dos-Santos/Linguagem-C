#include <stdio.h>

int main (){

    double largura,comprimento,metroQ, area, preco ;

    printf("Digite a largura do terreno: ") ;
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o comprimeto do metro quadarado: ");
    scanf("%lf", &metroQ);

    area = largura * comprimento;
    preco = area * metroQ;

    printf("Area do terreno = %3.2lf\n", area);
    printf("Preco do terreno = %5.2lf", preco);


    return 0;
}
