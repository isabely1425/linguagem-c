#include <stdio.h>

int main() {
// variaveis 
  float peso, altura, imc;

  //Entrada dos dados 
  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  //Calculando o imc
  imc = peso / (altura * altura);

  //Exibir IMC 
  printf("Seu IMC é: %.2f\n", imc);

  //Classificando o seu IMC 
  if(imc < 18.5) {
    printf("Clasificação Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9) { printf("Clasificação: Peso Normal\n");
    } else if (imc >= 25 && imc < 29.9) { printf("Clasificação: Sobrepeso\n");
    } else { 
    printf("Clasificação: Obesidade\n");
  }
            
  return 0;                                 
}