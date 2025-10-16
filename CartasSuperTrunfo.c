#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pturisticos1;

  char estado2;
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pturisticos2;

  // Área para entrada de dados
  //carta  1
  printf("Digite o estado da carta 1: ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta 1: ");
  scanf("%s", &codigo1);
  printf("Digite o cidade da carta 1: ");
  scanf("%s", &cidade1);
  printf("Digite o populacao da carta 1: ");
  scanf("%d", &populacao1);
  printf("Digite o area da carta 1: ");
  scanf("%f", &area1);
  printf("Digite o pib da carta 1: ");
  scanf("%f", &pib1);
  printf("Digite o pturisticos da carta 1: ");
  scanf("%d", &pturisticos1);

  //carta 2
  printf("Digite o estado da carta 2: ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta 2: ");
  scanf("%s", &codigo2);
  printf("Digite o cidade da carta 2: ");
  scanf("%s", &cidade2);
  printf("Digite o populacao da carta 2: ");
  scanf("%d", &populacao2);
  printf("Digite o area da carta 2: ");
  scanf("%f", &area2);
  printf("Digite o pib da carta 2: ");
  scanf("%f", &pib2);
  printf("Digite o pturisticos da carta 2: ");
  scanf("%d", &pturisticos2);
  // Área para exibição dos dados da cidade
  printf("Estado da carta 1 é: %c\n", estado1);
  printf("Codigo da carta 1 é: %s\n", codigo1);
  printf("Cidade da carta 1 é: %s\n", cidade1);
  printf("População da carta 1 é: %d\n", populacao1);
  printf("Area da carta 1 é: %f\n", area1);
  printf("PIB da carta 1 é: %f\n", pib1);
  printf("Pontos turísticos da carta 1 é: %d\n", pturisticos1);

  printf("Estado da carta 2 é: %c\n", estado2);
  printf("Codigo da carta 2 é: %s\n", codigo2);
  printf("Cidade da carta 2 é: %s\n", cidade2);
  printf("População da carta 2 é: %d\n", populacao2);
  printf("Area da carta 2 é: %f\n", area2);
  printf("PIB da carta 2 é: %f\n", pib2);
  printf("Pontos turísticos da carta 2 é: %d\n", pturisticos2);

  return 0;
} 
