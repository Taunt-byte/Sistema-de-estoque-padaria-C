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
<<<<<<< HEAD
repetiï¿½oes
=======
repetiçoes
>>>>>>> 8a36f4d486afeb695476fd75db022cb025dff3a3
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
<<<<<<< Updated upstream
    printf("Pao de queijo (unidade) == 1,00 RS \n");
    printf("Bolo de cenoura (unidade) == 2,30 RS \n");
    printf("Bolo de chocolate (unidade) == 2,20 RS \n");
<<<<<<< HEAD
    printf("Queijo de mussarela (100g) == 0,50 RS \n");
    printf("Queijo mineiro (100g) == 0,70 RS \n");
    printf("Mortadela (100g) == 0,90 RS \n");
    printf("Peito de peru (500g) == 2,30 RS \n");
=======
=======
    printf("Pao de queijo (unidade) == 0,80 RS \n");
    printf("Bolo de cenoura (unidade) == 2,50 RS \n");
    printf("Bolo de chocolate (unidade) == 2,50 RS \n");
>>>>>>> Stashed changes

>>>>>>> 8a36f4d486afeb695476fd75db022cb025dff3a3
    return;
}

void acougue(void){
<<<<<<< Updated upstream
    printf("====Menu da frio==== \n");
<<<<<<< HEAD
=======
    printf("Queijo de mussarela (100g) == 0,50 RS \n");
    printf("Queijo mineiro (100g) == 0,70 RS \n");
    printf("Mortadela (100g) == 0,90 RS \n");
    printf("Peito de peru (500g) == 2,30 RS \n");
>>>>>>> 8a36f4d486afeb695476fd75db022cb025dff3a3
    printf("Carne muito boa (500g) == 2,20 RS \n");
=======
    printf("====Menu de frios ==== \n");
    printf("Queijo de mussarela (100g) == 0,50 RS \n");
    printf("Queijo mineiro (100g) == 0,50 RS \n");
    printf("Mortadela (100g) == 0,80 RS \n");
    printf("Peito de peru (500g) == 2,50 RS \n");
    printf("Carne muito boa (500g) == 2,50 RS \n");
>>>>>>> Stashed changes

    return;
}

int main(int escolha)
{
    impri_cabec();
<<<<<<< HEAD
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
=======
    printf("\n Para ver o menu da padaria digite um(1) para ver o menu do açougue(2)\n");
<<<<<<< Updated upstream
    scanf("%d",escolha);
    if(escolha==1){
        padaria();
    }else{
        acougue();
    }
    acougue();
>>>>>>> 8a36f4d486afeb695476fd75db022cb025dff3a3
=======
    scanf("%d",&escolha);
    switch ( escolha ){
    case 1 :
        padaria();
    break;
>>>>>>> Stashed changes

    case 2 :
        acougue();
    break;

    default :
    printf ("Valor invalido!\n");
  }

  getch();
  return 0;
}
