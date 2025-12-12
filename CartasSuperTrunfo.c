#include <stdio.h>// Criado por Gabriel Teixeira


int main(){// criar um super-trunfo na linguagem C

int populacao , NPT , populacao2 , NPT2  =50;// NPT= Numeros de Pontos Turisticos  
float area , pib , area2 , pib2 =50;
char Cidade[50]="Cidade" ; 
char Codigo[3]="A01";//codigo da cidade 
char Estado[50]="Estado";
char Cidade2[50]="Cidade"; 
char Codigo2[5]="A01";//codigo da cidade 
char Estado2[50]="Estado";


printf("____Super____Trunfo____\n");



printf("Digite o estado:");
scanf( " %s", Estado );//letras nao precisa de & so o nome 

printf("Digite sua Cidade:");
scanf (" %s" , Cidade);

printf("Digite codigo da Cidade:");
scanf(" %s", Codigo );

printf("Digite sua populacao:");
scanf(" %d", &populacao);// ja numeros sim precisa

printf("digite a area:");
scanf(" %f", &area);

printf("Digite o PIB:");
scanf(" %f", &pib);

printf("Numero de Pontos Turisticos:");
scanf("%d", &NPT);


printf("\nAgora vamos para outra Carta!!!\n");

printf("\nDigite o estado:");
scanf( "%s", Estado2 );//letras nao precisa de & so o nome 

printf("Digite sua Cidade:");
scanf ("%s" , Cidade2);

printf("Digite codigo da Cidade:");
scanf("%s", Codigo2 );

printf("Digite sua populacao:");
scanf("%d", &populacao2);// ja numeros sim precisa

printf("digite a area:");
scanf("%f", &area2);

printf("Digite o PIB:");
scanf("%f", &pib2);

printf("Numero de Pontos Turisticos:");
scanf("%d", &NPT2);



printf("Sua Primeira carta de Estado é:%s\n",Estado );
printf("SUa cidade é:%s\n", Cidade);
printf("Seu codigo é:%s\n", Codigo);
printf("Sua populacao:%d\n",populacao);
printf("Sua area é:%.1f\n", area );
printf("Seu PIB é:%.2f\n", pib);
printf("Pontos Turisticos:%d\n",NPT);

printf("\nSua Segunda carta de Estado é:%s\n",Estado2 );
printf("SUa cidade é:%s\n", Cidade2);
printf("Seu codigo é:%s\n", Codigo2);
printf("Sua populacao:%d\n",populacao2);
printf("Sua area é:%.1f\n", area2 );
printf("Seu PIB é:%.2f\n", pib2);
printf("Pontos Turisticos:%d\n",NPT2);











}