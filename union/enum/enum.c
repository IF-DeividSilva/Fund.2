/*
* @file atividade_1_aula16
* @author Deivid da Silva Galvao
* @date 18 mar 2022
* @brief 

1) Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//enum para representar oa meses do ano

typedef enum {JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO} Meses;



int main(int argc, char const *argv[])
{
    //declarando pesquisa (para guardar o valor relacionado ao mes) e declarando a enum.
    int pesquisa;
    Meses mes;

    //pegando os dados do usuario
    printf("Digite um numero interio: ");
    scanf("%d", &pesquisa);

    //switch para fazer a pesquisa do mes e mostrar quantos dias ele tem
    switch (pesquisa)
    {
    case JANEIRO:
        printf("Janeiro: 31 dias");
        break;

    case FEVEREIRO:
        printf("Fevereiro: 28/29 dias");
        break;    

    case MARCO:
        printf("Marco: 31 dias");
        break;    

    case ABRIL:
        printf("Abril: 30 dias");
        break;  

    case MAIO:
        printf("Maio: 31 dias");
        break; 

    case JUNHO:
        printf("Junho: 30 dias");
        break;

    case JULHO:
        printf("Julho: 31 dias");
        break;           

    case AGOSTO:
        printf("Agosto: 31 dias");
        break; 

    case SETEMBRO:
        printf("Setembro: 30 dias");
        break;  

    case OUTUBRO:
        printf("Outubro: 31 dias");
        break;   

    case NOVEMBRO:
        printf("Novembro: 30 dias");
        break;  

     case DEZEMBRO:
        printf("Dezembro: 30 dias");
        break;                  
                    
    }//switch

    return 0;
}//main
