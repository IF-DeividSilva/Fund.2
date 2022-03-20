/*
* @file atividade_2_aula16
* @author Deivid da Silva Galvao
* @date 18 mar 2022
* @brief 

 2) Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// enum para enumerar as nacionalidades
typedef enum {BRASILEIRO=1, ESTRANGEIRO} Nacionalidade;
//union para pegar o cpf ou o passaporte dependendo da nacionalidade do usuario, economizando memoria
typedef union 
{
    int cpf [12];
    int passaporte [21];

}Documento;
//definido a estrutura dada de nascimento
typedef struct 
{
    int dia;
    int mes;
    int ano;
}Data_nascimento;

//definido a estrutura cadastro com a estrutura data de nascimento dentro
typedef struct 
{
    char nome[51];
    int idade;
    float peso;
    int verifica;
    Data_nascimento data;

}Cadastro;




int main(int argc, char const *argv[])
{
    //declarando as structs e variaveis
    int n=1;
    int i;
    Cadastro cad [5];
    Documento doc [5];
    Nacionalidade Nacionalidade;
//for para pegar os dados das 5 pessoas do teclado
for (size_t i = 0; i < 5; i++)
{
    printf("Digite o nome da pessoa %d: ", n);
    setbuf(stdin, NULL);
    fgets(cad[i].nome,51, stdin);
    cad[i].nome[strcspn(cad[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);

    printf("Digite a idade: ");
    scanf("%d", &cad[i].idade);

    printf("Digite a peso: ");
    scanf("%f", &cad[i].peso);

    printf("Digite a data de nascimento no formato dia/mes/ano: ");
    printf("Dia: ");
    scanf("%d", &cad[i].data.dia);

    printf("Mes: ");
    scanf("%d", &cad[i].data.mes);

    printf("Ano: ");
    scanf("%d", &cad[i].data.ano);

    printf("Digite 1 se for Brasileiro ou digite 2 se for estrangeiro: ");
    scanf("%d", &cad[i].verifica);
//if para verificar  a nacionalidade da pessoa
    if (cad[i].verifica == BRASILEIRO)
    {
      printf("Digite seu CPF: ");
      setbuf(stdin, NULL);
      fgets(doc[i].cpf,12, stdin);
      doc[i].cpf[strcspn(doc[i].cpf,"\n")]='\0';
      setbuf(stdin, NULL);

    }if (cad[i].verifica == ESTRANGEIRO)
    {
      printf("Digite seu Passaporte: ");
      setbuf(stdin, NULL);
      fgets(doc[i].passaporte,21, stdin);
      doc[i].passaporte[strcspn(doc[i].passaporte,"\n")]='\0';
      setbuf(stdin, NULL);
    }//if
    
    
    n++;
}//for

printf("---------DADOS------------- \n");
//for para exibir os dados coletados
for (size_t i = 0; i < 5; i++)
{
    printf("Nome: %s \nidade: %d \npeso: %.2f \ndata de nascimento: %d/%d/%d \n" , cad[i].nome, cad[i].idade, cad[i].peso, cad[i].data.dia, cad[i].data.mes, cad[i].data.ano );
    
    if (cad[i].verifica == BRASILEIRO)
    {
       printf("Brasileiro \n");
       printf("Cpf: %s \n", doc[i].cpf); 

    }if (cad[i].verifica == ESTRANGEIRO)
    {
        printf("Extrangeiro \n");
        printf("Passaporte: %s \n", doc[i].passaporte);
    }//if
    
}//for
    return 0;
}//main