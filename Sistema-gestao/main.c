/*Incluindo as bibliotecas para rodar o programa*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
Sistema de gestao de mercearia utilizando:

stings
vetores
struct
repeticoes x
matriz
funcoes x
*/


//Cabecalho
void impri_cabeca(void){
    printf("***************************************\n");
    printf("* BEM VINDO A MERCEARIA DO ZE RAMALHO *\n");
    printf("***************************************\n\n");

    return;
}
//Menus
void padaria(void){
    printf("*******************\n");
    printf("* MENU DA PADARIA *\n");
    printf("*******************\n\n");
    printf("[1] - Pao frances (unidade) == 0,20 RS \n");
    printf("[2] - Pao doce(unidade) == 0,50 RS \n");
    printf("[3] - Pao de queijo (unidade) == 1,00 RS \n");
    printf("[4] - Bolo de cenoura (unidade) == 2,30 RS \n");
    printf("[5] - Bolo de chocolate (unidade) == 2,20 RS \n");
    return;
}

void acougue(void){
    printf("*******************\n");
    printf("* MENU DAS CARNES * \n");
    printf("*******************\n\n");
    printf("[6]- Carne de boi (100g) == 0,50 RS \n");
    printf("[7]- Carne de camelo (100g) == 0,70 RS \n");
    printf("[8] - Carne de jacare  (100g) == 0,90 RS \n");
    printf("[9]- Carne de pato  (500g) == 2,30 RS \n");
    printf("[10] - Carne de vaca (500g) == 2,20 RS \n");

    return;
}
//Parte de compras
void menu_cliente (){
   printf("*********************\n");
   printf("* ESCOLHA UMA OPCAO *\n");
   printf("*********************\n");
   //Os numeros no produto são suas id para adicionar no carrinho
   printf ("[1] - Adicionar um produto ao carrinho \n");
   printf ("[2] - Remover produto do carrinho \n");
   printf ("[3] - Ver produtos no carrinho \n");
   printf ("[4] - Fechar compra \n");

   }
//main
int main(int escolha)
{
    int saldo = 200;
    int decisao,produto[10];
    impri_cabeca();
    printf("Saldo do cliente: %d \n",&saldo);
    printf(" Escolha o menu que deseja acessar \n");
    printf("Digite [1] para acessar o menu da area da padaria \n");
    printf("Digite [2] para acessar o menu da area de carnes \n");
    printf("Digite [3] para acessar os dois menus \n");
    scanf("%d",&escolha);
    switch (escolha)
{
   case 1:
     padaria();
    break;
   case 2:
     acougue();
    break;
   default:
     printf("Esse numero e invalido os dois menus serao exibidos \n");
     padaria();
     acougue();
    break;
}
  menu_cliente();
  scanf("%d",&decisao);
  switch(decisao){
  case 1:
      printf("Qual item deseja adicionar a lista de compras ?");
      scanf("%d",&produto)
  }
  return 0;
}
