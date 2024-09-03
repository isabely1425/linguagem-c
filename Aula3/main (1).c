#include <stdio.h>

int main() {
  char nome[50]; // Array para armazenar o nome
  int idade; // variavel inteira para idade
  float altura; // variavel float para altura

  //Entradas do Usuário 
  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin); // Le a entrada do usuario 
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  //Saida do dados
  printf("\n-----------Dados Informados--------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  return 0;
}