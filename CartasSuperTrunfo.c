#include <stdio.h>

int main(){
char carta[10];
char cidade[30];
char estado;
int populacao;
int numero;
float area;
float PIB;

char carta2[10];
char cidade2[30];
char estado2;
int populacao2;
int numero2;
float area2;
float PIB2;

printf("Digite a letra inicial do estado: ");
scanf("%c", &estado);
printf("O estado é: %c\n", estado);

printf("Digite sua carta: ");
scanf("%s", &carta);
printf("A sua carta é: %s\n", carta);

printf("Digite a cidade: ");
scanf("%s", &cidade);
printf("A cidade é: %s\n", cidade);

printf("Digite o número de habitantes da cidade: ");
scanf("%d", &populacao);
printf("O número de habitantes é: %d\n", populacao);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &numero);
printf("O número de pontos turísticos é: %d\n", numero);

printf("Digite a área da cidade em km quadrados: ");
scanf("%f", &area);
printf("A área em km quadrados é: %f\n", area);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB);
printf("O PIB da cidade é: %f\n", PIB);



printf("Digite a letra inicial do estado: ");
scanf("%c", &estado2);
printf("O estado é: %c\n", estado2);

printf("Digite sua segunda carta: ");
scanf("%s", &carta2);
printf("A sua carta é: %s\n", carta2);

printf("Digite a cidade: ");
scanf("%s", &cidade2);
printf("A cidade é: %s\n", cidade2);

printf("Digite o número de habitantes da cidade: ");
scanf("%d", &populacao2);
printf("O número de habitantes é: %d\n", populacao2);

printf("Digite o número de pontos turísticos da cidade: ");
scanf("%d", &numero2);
printf("O número de pontos turísticos é: %d\n", numero2);

printf("Digite a área da cidade em km quadrados: ");
scanf("%f", &area2);
printf("A área em km quadrados é: %f\n", area2);

printf("Digite o PIB da cidade:");
scanf("%f", &PIB2);
printf("O PIB2 da cidade é: %f\n", PIB2);

return 0;
 }
