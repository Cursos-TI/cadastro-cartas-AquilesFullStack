#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2];
  char codigo1[3];
  char cidade1[30];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pturisticos1;
  float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pturisticos1 + pibp1 + ;
  

  float superpoder2;
  char estado2[2];
  char codigo2[3];
  char cidade2[30];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pturisticos2;


  // Área para entrada de dados
  //carta  1
  printf("==============DADOS DA CARTA 1====================\n");
  printf("Digite o estado da carta 1 (A-H): ");
  scanf(" %s", estado1);
  printf("==================================\n");
  printf("Digite o codigo da carta 1 (01-04): ");
  scanf(" %s", codigo1);
  printf("==================================\n");
  printf("Digite o cidade da carta 1: ");
  scanf(" %s", cidade1);
  printf("==================================\n"); 
  printf("Digite o populacao da carta 1: ");
  scanf(" %d", &populacao1);
  printf("==================================\n");
  printf("Digite o area da carta 1: ");
  scanf(" %f", &area1);
  printf("==================================\n");
  printf("Digite o pib da carta 1: ");
  scanf(" %f", &pib1);
  printf("==================================\n");
  printf("Digite o pturisticos da carta 1: ");
  scanf(" %d", &pturisticos1);

  //carta 2
  printf("==============DADOS DA CARTA 2====================\n");
  printf("==================================\n");
  printf("Digite o estado da carta 2: ");
  scanf(" %s", estado2);
  printf("Digite o codigo da carta 2: ");
  scanf(" %s", codigo2);
  printf("Digite o cidade da carta 2: ");
  scanf(" %s", cidade2);
  printf("Digite o populacao da carta 2: ");
  scanf(" %d", &populacao2);
  printf("Digite o area da carta 2: ");
  scanf(" %f", &area2);
  printf("Digite o pib da carta 2: ");
  scanf(" %f", &pib2);
  printf("Digite o pturisticos da carta 2: ");
  scanf(" %d", &pturisticos2);

  float dp1 = (float) populacao1 / area1;
  float pibp1 = (float) pib1 / populacao1;
  float dp2 = (float) populacao2 / area2;
  float pibp2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("==================================\n");
  printf("Estado da carta 1 é: %s\n", estado1);
  printf("Codigo da carta 1 é: %s\n", codigo1);
  printf("Cidade da carta 1 é: %s\n", cidade1);
  printf("População da carta 1 é: %d\n", populacao1);
  printf("Area da carta 1 é: %f\n", area1);
  printf("PIB da carta 1 é: %f\n", pib1);
  printf("Pontos turísticos da carta 1 é: %d\n", pturisticos1);
  printf("Densidade Populacional é: %.2f\n", dp1);
  printf("PIB per Carpita é: %.2f\n", pibp1);

  printf("==================================\n");
  printf("Estado da carta 2 é: %s\n", estado2);
  printf("Codigo da carta 2 é: %s\n", codigo2);
  printf("Cidade da carta 2 é: %s\n", cidade2);
  printf("População da carta 2 é: %d\n", populacao2);
  printf("Area da carta 2 é: %f\n", area2);
  printf("PIB da carta 2 é: %f\n", pib2);
  printf("Pontos turísticos da carta 2 é: %d\n", pturisticos2);
  printf("Densidade Populacional é: %.2f\n", dp2);
  printf("PIB per Carpita é: %.2f\n", pibp2);

  return 0;
} 
