#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float n1,n2;
    int op;

    printf("escolha uma das opções abaixo:\n");
    printf("1 adição:\n");
    printf("2 subtração:\n");
    printf("3 mutiplicação:\n");
    printf("4 divisão:\n");
    scanf("%i", &op);
    printf("insira um numero: ");
    scanf("%f", &n1);
    printf("insira um numero: ");
    scanf("%f",&n2);
    switch (op){
    case 1:
    printf(" a adição é :%f",n1+n2);
        
        break;
        case 2:
        printf("a subtração é: %f", n1-n2);
        break;
        case 3: 
        printf("A mutiplicação é: %f", n1*n2);
        break;
        case 4: 
        printf("a divisão é: %f", n1/n2);
        break;
    
    default: ("opcao invalida");
    }
    return 0;

}