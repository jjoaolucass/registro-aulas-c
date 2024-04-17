#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    float vp;
    int cp, qp;
    printf("100, cachorro quente, valor r$ 8.00. \n");
    printf("101, bauru, r$9.00. \n");
    printf("102, Xsalada, r$10.00. \n");
    printf("103, harburguer, R$12.00. \n");
    printf("104, refrigerante, r$3.00.\n");
    printf("insira o codigo do produto desejado:");
    scanf("%i", &cp);
    printf("selecione a quantidade dos produtos desejados");
    scanf("%i",&qp);
    switch(cp)
    {
    case 100:
        vp = 8.00;
        vp = qp * 8.00;
        break;

        case 101:
        vp = 9.00;
        vp = qp * 9.00;
        break;

        case 102:
        vp = 10.00;
        vp = qp * 10.00;
        break;

        case 103:
        vp = 12.00;
        vp = qp * 12.00;
        break;

        case 104:
        vp = 3.00;
        vp = qp * 3.00;
        break;
       
    
    default:
    printf("nenhuma opção selecionada:");
        break;
    } printf("o valor a ser pago:%f ", vp);

    return 0;
}