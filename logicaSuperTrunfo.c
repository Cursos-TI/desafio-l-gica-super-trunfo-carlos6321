#include <stdio.h>

int main(){

             printf("BEM VINDO AO SUPER TRUNFO:\n");
printf("CADSTRE SUAS CARTAS E BOM JOGO:\n");

 // Definindo as Variaveis

char letra_estado_1, letra_estado_2;
char codigo_cidade_1, codigo_cidade_2;
char nome_cidade_1[20], nome_cidade_2[20];
int populacao_1, populacao_2;
float area_1, area_2;
float pib_1, pib_2;
int pontos_turristico_1, pontos_turristico_2;
float densidade_populacional_1, densidade_populacional_2;
float pib_percapta_1, pib_percapta_2;
float super_poder1, super_poder2;

// **** CARTA 1 ****

printf("**** carta 1****\n");

printf("digite letra_estado_1:  \n");
scanf("%c", &letra_estado_1);

printf("digite codigo_cidade_1:\n");
scanf("%s", &codigo_cidade_1);

printf("digite nome_cidade_1:\n");
scanf("%s", &nome_cidade_1);

printf("digite populacao_1:\n");
scanf("%d", &populacao_1);

printf("digite area_1 KM²:\n");
scanf("%f", &area_1);

printf("digite o pib_1 Bilhoes R$:\n");
scanf("%f", &pib_1);

printf("digite pontos_turristico_1:\n");
scanf("%d", &pontos_turristico_1);

// CALCULANDO AS METRICAS DENSIDADE POPULACIONAL E O PIB PERCAPTA

densidade_populacional_1 =(float) (populacao_1 / area_1);
printf("a densidade_populacinal_1 e:%f\n", densidade_populacional_1 );

pib_percapta_1 = (float) (pib_1 / populacao_1);
printf(" o pib_percapta_1 e: %f\n", pib_percapta_1);

//DEFININDO O SUPER-TRUNFO SUPER PODER

super_poder1= (float)(populacao_1 + area_1 + pib_1 + pib_percapta_1 + area_1/populacao_1);
printf("super_poder1 é: %f\n", super_poder1);


              //**** CARTA 2 ****
              
printf("****carta 2 ****\n");              
        
printf("digite letra_estado_2:\n");
scanf("%s", &letra_estado_2);
              
printf("digite codigo_cidade_2:\n");
scanf("%s", &codigo_cidade_2);
              
printf("digite nome_cidade_2:\n");
scanf("%s", &nome_cidade_2);
              
printf("digite populacao_2:\n");
scanf("%d", &populacao_2);
              
printf("digite area_2 KM²:\n");
scanf("%f", &area_2);
              
printf("digite o pib_2 Bilhoes de R$:\n");
scanf("%f", &pib_2);
              
printf("digite pontos_turristico_2:\n");
scanf("%d", &pontos_turristico_2);

// CALCULANDO AS METRICAS DENSIDADE POPULACIONAL E O PIB PERCAPTA

densidade_populacional_2 =(float) (populacao_2 / area_2);
printf("a densidade_populacinal_2 e:%f\n", densidade_populacional_2 );

pib_percapta_2 = (float) (pib_2 / populacao_2);
printf(" o pib_percapta_2 e: %f\n", pib_percapta_2);

//DEFININDO O SUPER-TRUNFO SUPER PODER

super_poder2= (float)(populacao_2 + area_2 + pib_2 + pib_percapta_2+ area_2/populacao_2);
printf("super_poder2 é: %f\n", super_poder2);

// COMPARANDO OS ATRIBUTOS QUE IRÁ DEFINIR O VENCEDOR COM AS ESTRUTURAS DE DECISAO

if (populacao_1 > populacao_2)  // o maior atributo vence
{
    printf("Sao Paulo venceu!\n");
}  else{
    printf("Rio de Janeiro venceu!\n");
}

if (area_1 > area_2)  // o maior atributo vence
{
    printf("Sao Paulo venceu!\n");
}  else{
    printf("Rio de Janeiro venceu!\n");
}
if (pib_1 > pib_2)  // o maior atributo vence
{
   printf("Sao Paulo venceu!\n");
}  else{
    printf("Rio de Janeiro venceu!\n");
}

if(pontos_turristico_1 > pontos_turristico_2)   // maior atributo vence
{
    printf("Sao Paulo venceu!\n");
}    else{
    printf("Rio de Janeiro venceu!\n");
}
if(densidade_populacional_1 < densidade_populacional_2) // vence o menor atributo
{
    printf("Sao Paulo venceu!\n");
}  else{
    printf("Rio de Janeiro venceu!\n");
}
    
if (pib_percapta_1 > pib_percapta_2)  // o maior atributo vence
{
    printf("Sao Paulo venceu!\n");
}   else{
    printf("Rio de Janeiro venceu!\n");
}

return 0;
}