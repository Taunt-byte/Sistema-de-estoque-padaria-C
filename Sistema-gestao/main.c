/*Incluindo as bibliotecas para rodar o programa*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
Sistema de mercearia utilizando:

stings
vetores
struct
repeti�oes
matriz

*/
int saldo = 200;

void impri_cabec(void){
    printf("***************************************\n");
    printf("* Bem vindo a mercearia do Ze Ramalho *\n");
    printf("***************************************\n\n");
    printf("Saldo do cliente: %d \n",saldo);
    return;
}

void padaria(void){
    printf("==== Menu da padaria ==== \n");
    printf("Pao frances (unidade) == 0,20 RS \n");
    printf("Pao doce(unidade) == 0,50 RS \n ");
    printf("Pao de queijo (unidade) == 1,00 RS \n");
    printf("Bolo de cenoura (unidade) == 2,30 RS \n");
    printf("Bolo de chocolate (unidade) == 2,20 RS \n");
    printf("Queijo de mussarela (100g) == 0,50 RS \n");
    printf("Queijo mineiro (100g) == 0,70 RS \n");
    printf("Mortadela (100g) == 0,90 RS \n");
    printf("Peito de peru (500g) == 2,30 RS \n");
    return;
}

void acougue(void){
    printf("====Menu da frio==== \n");
    printf("Carne muito boa (500g) == 2,20 RS \n");

    return;
}

int main(int escolha)
{
    impri_cabec();
    printf("Escolha o menu que deseja acessar\n");
    printf("Digite um para acessar o menu da area da padaria");
    printf("Digite dois para acessar o menu da area de carnes");
    scanf("%d",escolha);
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

    return 0;
}
