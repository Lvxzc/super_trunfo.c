#include <stdio.h>
int main(){
int carta = 1;
char estado = 'A';
char codigo[30] = "A01";
char nome_da_cidade[30] = "Sao_paulo";
int populacao = 12325000;
float area = 1521.11; // Em km²
float pib = 699.28; // Em bilhões de reais
int pontos_turisticos = 50;

int carta2 = 2;
char estado2 = 'B';
char codigo2[30] = "B02";
char nome_da_cidade2[30] = "Rio_de_Janeiro";
int populacao2 = 6748000;
float area2 = 1200.25; // Em km²
float pib2 = 300.50; // Em bilhões de reais
int pontos_turisticos2 = 30;

printf("carta: %d\n", carta);
printf("estado: %c\n", estado); 
printf("codigo: %s\n", codigo);
printf("nome_da_cidade: %s\n", nome_da_cidade);
printf("populacao: %d\n", populacao);
printf("area: %.2f km²\n", area);
printf("pib: %.2f bilhões de reais\n", pib);
printf("pontos_turisticos: %d\n", pontos_turisticos);

printf("\ncarta2: %d\n", carta2);
printf("estado2: %c\n", estado2); 
printf("codigo2: %s\n", codigo2);
printf("nome_da_cidade2: %s\n", nome_da_cidade2);
printf("populacao2: %d\n", populacao2);
printf("area2: %.2f km²\n", area2);
printf("pib2: %.2f bilhões de reais\n", pib2);
printf("pontos_turisticos2: %d\n", pontos_turisticos2);







}