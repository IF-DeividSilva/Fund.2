/*
* @file atividade_2
* @author Deivid da Silva Galvao
* @date 16 mar 2022
* @brief:

2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: local, horário, data e texto que descreve o
compromisso.


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//definido a estrutura data
typedef struct
{
     int dia;
    int mes;
    int ano;
}Data;//struct data
   //definido a estrutura horario
  typedef struct
  {
    int hora;
    int minuto;
    int segundo;

  }Horario;

//defiinido a estrutura compromisso e incluindo as estruturas horario e data dentro dela
typedef struct
{
  char local[51];
  char descricao[101];
  Horario end;
  Data fim;

}Compromisso;

int main(int argc, char const *argv[])
{
    Compromisso meu_compromisso;//declarando e reservando espaco da estrutura compromisso
    //solicitando os dados do usuario
    printf("Digite o endereco: ");
    setbuf(stdin, NULL);
    fgets(meu_compromisso.local,51, stdin);
    meu_compromisso.local[strcspn(meu_compromisso.local,"\n")]='\0';
    setbuf(stdin, NULL);

    printf("Digite uma descricao do evento: ");
    fgets(meu_compromisso.descricao,51, stdin);
    meu_compromisso.descricao[strcspn(meu_compromisso.descricao,"\n")]='\0';
    setbuf(stdin, NULL);

    printf("Digite digite o dia do evento: ");
    scanf("%d", &meu_compromisso.fim.dia);

    printf("Digite digite o mes do evento: ");
    scanf("%d", &meu_compromisso.fim.mes);

    printf("Digite digite o dia do evento: ");
    scanf("%d", &meu_compromisso.fim.ano);

    printf("Digite o horario no formato hora/minutos/segundo \n");
    printf("Hora: ");
    scanf("%d", &meu_compromisso.end.hora);
    printf("Minuto: ");
    scanf("%d", &meu_compromisso.end.minuto);
    printf("Segundo: ");
    scanf("%d", &meu_compromisso.end.segundo);

   // exibindo os dados coletados para o usuario
    printf("------Dados do Compromisso-------\n");
    printf("Horario: %.2d: %.2d :%.2d \n",meu_compromisso.end.hora, meu_compromisso.end.minuto, meu_compromisso.end.segundo);
    printf("Data: %d/%d/%d \n", meu_compromisso.fim.dia, meu_compromisso.fim.mes, meu_compromisso.fim.ano);
    printf("Local: %s \n", meu_compromisso.local);
    printf("Descricao: %s \n", meu_compromisso.descricao);


return 0;
}//fecha main
