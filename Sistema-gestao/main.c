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

int saldo = 200;

//Cabecalho
void impri_cabec(void){
    printf("***************************************\n");
    printf("* Bem vindo a mercearia do Ze Ramalho *\n");
    printf("***************************************\n\n");
    printf("Saldo do cliente: %d \n",saldo);
    return;
}
//Menus
void padaria(void){
    printf("==== Menu da padaria ==== \n");
    printf("1-Pao frances (unidade) == 0,20 RS \n");
    printf("2-Pao doce(unidade) == 0,50 RS \n ");
    printf("3-Pao de queijo (unidade) == 1,00 RS \n");
    printf("4-Bolo de cenoura (unidade) == 2,30 RS \n");
    printf("5-Bolo de chocolate (unidade) == 2,20 RS \n");
    return;
}

void acougue(void){

    printf("====Menu das carnes==== \n");
    printf("1-Carne de boi (100g) == 0,50 RS \n");
    printf("2-Carne de camelo (100g) == 0,70 RS \n");
    printf("3-Carne de jacare  (100g) == 0,90 RS \n");
    printf("4-Carne de pato  (500g) == 2,30 RS \n");
    printf("5-Carne de vaca (500g) == 2,20 RS \n");

    return;
}
//sistema de compras
void compra(int decisao){
    printf("Deseja comprar alguma coisa ?");
    printf("1- Sim");
    printf("2-Não");
    scanf("%d",&decisao);
    switch(decisao){
case 1:
    printf("O que deseja comprar?");
    printf("Use o numero disposto no menu");
    scanf("%d");

case 2:
    printf("Tudo bem tenha um otimo dia!");
    break;
default:
    printf("Numero invalido");
    break;
}
}
//main
int main(int escolha)
{
    int dec1,dec3;
    impri_cabec();
    printf("Escolha o menu que deseja acessar\n");
    printf("Digite um para acessar o menu da area da padaria \n");
    printf("Digite dois para acessar o menu da area de carnes \n");
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
     printf("Esse numero e invalido");
    break;
}
  getch();
  return 0;
}
