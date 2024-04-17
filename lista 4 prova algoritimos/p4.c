#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int qm;
    float vm;

    printf("insira a quantidade de maças desejadas:");
    scanf("%i", &qm);
    if (qm >= 12){
        vm = qm * 1.10;
        printf("O valor total é %.2f", vm);
    } 
    if(qm < 12){
        vm = qm * 1.30;
        printf("O valor total é: %.2f", vm);
    }
        return 0;
}