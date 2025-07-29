#include <stdio.h>

int main(){
char codigodacarta[10];
char cidade[30];
char estado;
int populacao;
int pontosturisticos;
float area;
float pib;

char codigodacarta2[10];
char cidade2[30];
char estado2;
int populacao2;
int pontosturisticos2;
float area2;
float pib2;

printf("Digite a letra inicial do estado: ");
scanf(" %c", &estado);

printf("Digite o código da sua carta: ");
scanf("%s", codigodacarta);

printf("Digite a cidade: ");
scanf(" %29[^\n]", cidade);

printf("Digite o número de habitantes da cidade: ");
scanf("%d", &populacao);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &pontosturisticos);

printf("Digite a área da cidade em km quadrados: ");
scanf("%f", &area);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib);

printf("Digite a letra inicial do estado: ");
scanf(" %c", &estado2);

printf("Digite sua segunda carta: ");
scanf("%s", codigodacarta2);

printf("Digite a cidade: ");
scanf(" %29[^\n]", cidade2);

printf("Digite o número de habitantes da cidade: ");
scanf("%d", &populacao2);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &pontosturisticos2);

printf("Digite a área da cidade em km quadrados: ");
scanf("%f", &area2);

printf("Digite o PIB da cidade:");
scanf("%f", &pib2);

printf("Dados da carta 1!\n");
printf("O estado é: %c\n", estado);
printf("O código da sua carta é: %s\n",codigodacarta);
printf("A cidade é: %s\n", cidade);
printf("O número de habitantes é: %d\n", populacao);
printf("O número de pontos turísticos é: %d\n", pontosturisticos);
printf("A área em km quadrados é: %.2f\n", area);
printf("O PIB da cidade é: %.2f\n", pib);

printf("Dados da carta 2!\n");
printf("O estado é: %c\n", estado2);
printf("A sua carta é: %s\n", codigodacarta2);
printf("A cidade é: %s\n", cidade2);
printf("O número de habitantes é: %d\n", populacao2);
printf("O número de pontos turísticos é: %d\n", pontosturisticos2);
printf("A área em km quadrados é: %.2f\n", area2);
printf("O PIB da cidade é: %.2f\n", pib2);

return 0;
 }
