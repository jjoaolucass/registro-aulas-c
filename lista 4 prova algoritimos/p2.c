#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int d, n;
    printf("insira o numerador:");
    scanf("%i", &n);
    printf("insira o denominador:");
    scanf("%i",&d);
     if (d != 0) {
    if (n % d == 0) {
      printf("%d é divisível por %d!\n", n, d);
    } else {
      printf("%d não é divisível por %d!\n", n, d);
    }
  } else {
    printf("Erro: Divisão por zero!\n");
  }

  return 0;
    
}