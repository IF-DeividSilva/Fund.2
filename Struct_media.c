/*
* @file atividade_3
* @author Deivid da Silva Galvao
* @date 16 mar 2022
* @brief:
 3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
//definindo a estrutura aluno
typedef struct
{
    char curso[51];
    char nome[51];
    float notas[4];
    float media;
    char situacao[21];
}Aluno;

int main(int argc, char const *argv[])
{
    //declarando as variaveis e a struct aluno
    int n = 1;
    int i;

    Aluno aluno;

//coletando os dados do aluno do teclado e salvando nos respectivos campos da struct

printf("Digite o nome do aluno: ");
fgets (aluno.nome,51,stdin);
aluno.nome[strcspn(aluno.nome,"\n")]='\0';
setbuf(stdin, NULL);

printf("Digite o curso do aluno: ");
fgets (aluno.curso,51,stdin);
aluno.curso[strcspn(aluno.curso,"\n")]='\0';
setbuf(stdin, NULL);
//for para coletar as 4 notas e um while para tratar notas digitadas incorretamentes
for ( i = 0; i < 4; i++)
{
    printf("Digite a nota %d do aluno: ", n);
    scanf("%f", &aluno.notas[i]);

    while (aluno.notas[i] < 0 || aluno.notas[i] > 11)
    {
       printf("------Comando invalido----Ultima tentativa---Digite um valor entre 0 e 10 \n ");
       printf("Digite a nota %d do aluno: ", n);
       scanf("%f", &aluno.notas[i]);
    }//while

   n++;


}//for

//calculando a media do aluno
 aluno.media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2] + aluno.notas[3]) / 4;

//sequencia de if para verificar a situacao do aluno
if (aluno.media >= 7)
{
    strcpy(aluno.situacao,"APROVADO");
    printf("Aluno: %s de %s tem a situação de: %s", aluno.nome, aluno.curso, aluno.situacao );

 }if (aluno.media < 7 && aluno.media >= 3)

 {
     strcpy (aluno.situacao, "EXAME");
     printf("Aluno: %s de %s tem a situação de: %s", aluno.nome, aluno.curso, aluno.situacao );

 }if (aluno.media < 3)
 {
     strcpy ( aluno.situacao , "REPROVADO");
     printf("Aluno: %s de %s tem a situação de: %s", aluno.nome, aluno.curso, aluno.situacao );
 }//if

    return 0;
}//main
