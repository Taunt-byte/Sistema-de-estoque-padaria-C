/*
Autor: Lucas Neves da Silva
Data: 23/06/22
*/
/*Incluindo as bibliotecas para rodar o programa*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Tempo: Horas e minutos
#include <locale.h> //Idioma: pontos virgulas e etc
/*
Sistema de gestao de mercearia utilizando:

stings x
vetores x
struct x
repeticoes x
funcoes x

A fazer:

Menu x
Gerar recibo x
Carrinho x
*/


void menu(void){
    printf("*****************************************************\n");
    printf("*                MENU DA PADARIA                    *\n");
    printf("*****************************************************\n");
    printf("*  [1]  - Pão francês          (unidade)   0,20 RS  *\n");
    printf("*  [2]  - Pão doce             (unidade)   0,50 RS  *\n");
    printf("*  [3]  - Pão de queijo        (unidade)   1,00 RS  *\n");
    printf("*  [4]  - Bolo de cenoura      (unidade)   2,30 RS  *\n");
    printf("*  [5]  - Bolo de chocolate    (unidade)   2,20 RS  *\n");
    printf("*  [6]  - Pão de maracujá      (unidade)   0,50 RS  *\n");
    printf("*  [7]  - Pão de coco          (unidade)   0,70 RS  *\n");
    printf("*  [8]  - Pão de batata        (unidade)   0,90 RS  *\n");
    printf("*  [9]  - Pão de cevada        (unidade)   2,30 RS  *\n");
    printf("*  [10] - Bolo de batata       (unidade)   2,20 RS  *\n");
    printf("*****************************************************\n");
    return;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[30],sobrenome[30],data[20],email[50],endereco[50],cpf[30];
    int i,escolha1,escolha2,produtoID;
    float preco,qtd,totalpreco;
    //ponteiro para struct que armazena data e hora
    struct tm *data_hora_atual;
    //variável do tipo time_t para armazenar o tempo em segundos
    time_t segundos;
    //obtendo o tempo em segundos
    time(&segundos);
    //para converter de segundos para o tempo local
    data_hora_atual = localtime(&segundos);

    printf("*****************************************************\n");
    printf("*          BEM VINDO A MERCEARIA DO ZE RAMALHO      *\n");
    printf("*****************************************************\n");

    //cadastro
    printf("Digite seu nome..: \n");
    scanf(" %s",&nome);
    printf("Digite seu sobrenome..: \n");
    scanf(" %s",&sobrenome);
    printf("Você possui cadastro ? \nSim [1] \nNão [2] \n");
    scanf("%d",&escolha1);

    switch(escolha1){
    case 1:
        printf("Digite seu CPF..: \n");
        scanf("%s",&cpf);
    break;
    case 2:
        printf("Digite seu email..: \n");
        scanf("%s",&email);
        printf("Digite sua data de nacimento..: \n");
        scanf("%s",&data);
        printf("Digite seu CPF..: \n");
        scanf("%s",&cpf);
        printf("Digite seu endereco..: \n");
        scanf("%s",&endereco);
    break;
    default:
        printf("Numero não valido \n");
    break;
    }


    //Carrinho
    menu();
    printf("\n Digite o código do produto..: \n");
 	scanf("%d",&produtoID);
    switch(produtoID){
    case 1:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [1]  - Pão francês - (unidade) 0,20 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 0.20;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 2:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [2]  - Pão doce (unidade) 0,50 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 0.50;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 3:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [3]  - Pão de queijo (unidade) 1,00 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 1.00;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 4:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [4]  - Bolo de cenoura (unidade) 2,30 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 2.30;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 5:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [5]  - Bolo de chocolate (unidade) 2,20 RS \n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 2.20;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 6:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [6]  - Pão de maracujá (unidade) 0,50 RS \n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 0.50;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 7:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [7]  - Pão de coco (unidade) 0,70 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 0.70;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 8:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [8]  - Pão de batata (unidade) 0,90 RS\n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 0.90;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 9:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [9]  - Pão de cevada (unidade)   2,30 RS \n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 2.30;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    case 10:
        printf("Quantidade..: \n");
        scanf("%f",&qtd);
        printf("PRODUTO SELECIONADO..: \n [10] - Bolo de batata (unidade)   2,20 RS \n");
        printf("QUANTIDADE SELECINADA..: %0.2f \n",qtd);
        preco = 2.20;
        totalpreco = qtd * preco;
        printf("Preço a ser pago..: %0.2f RS\n",totalpreco);
        break;
    default:
        printf("Numero invalido");
        break;
    }
    printf("Deseja Imprimir boleto ?\nSim [1] \nNao [2]\n");
    scanf(" %d",&escolha2);
    if(escolha2 == 1){
        printf("**********************************\n");
        printf("*   MERCEARIA DO ZE RAMALHO      *\n");
        printf("**********************************\n");
        printf(" Nome: %s %s \n Data: %d/%d/%d \n",&nome,&sobrenome,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        printf(" Hora: %d:%d:%d \n",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec);
        printf("**********************************\n");
        printf(" Itens: \n ID: %d \n Preço %0.2f RS",produtoID,totalpreco);
    }else{
        printf("Ok tenha um bom dia!");
    }
    return 0;
}