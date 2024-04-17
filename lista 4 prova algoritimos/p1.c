#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    float n;
    printf("insira um numero:");
    scanf("%f", &n);

    if (n > 0) {
        printf("%f o numero é positivo.\n", n);
    } else if (n < 0){
        printf(" %f o numero é negativo.\n", n);  
    } else {
        printf(" %f o numero é neutro.\n", n);
    }
    
    

    return 0;
}