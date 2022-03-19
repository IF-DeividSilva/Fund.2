/*
* @file atividade_4
* @author Deivid da Silva Galvao
* @date 16 mar 2022
* @brief:
4) Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

//definindo a estrutura de eletrodomesticos
struct eletrodomesticos
{
    char nome[16];
    float potencia;
    float tempo_ativo;
    int dias;
    float consumo_relativo[5];


}eletrodomesticos;//struct

int main(int argc, char const *argv[])
{
    float consumo_total = 0;
    struct eletrodomesticos aparelhos [5];//declarando a struct

//for para coletar os dados dos 5 aparelhos
for (size_t i = 0; i < 5; i++)
{
    setbuf(stdin, NULL);
    printf("Digite o nome do aparelho: ");
    fgets (aparelhos[i].nome,16,stdin);
    aparelhos[i].nome[strcspn(aparelhos[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);

    printf("Digite a potencia dele: ");
    scanf("%f", &aparelhos[i].potencia);

    printf("Digite o tempo que ele fica ativo por dia: ");
    scanf("%f", &aparelhos[i].tempo_ativo);

    printf("Digite quantos dias ele fica ativo: ");
    scanf("%d", &aparelhos[i].dias);

  //calculando o consumo total e parte do consumo relativo dos eletrodomesticos
    consumo_total = consumo_total + ((aparelhos[i].potencia*aparelhos[i].tempo_ativo) *aparelhos[i].dias);

    aparelhos[i].consumo_relativo[i] = ((aparelhos[i].potencia*aparelhos[i].tempo_ativo) *aparelhos[i].dias) ;

}//for
//outro for para transformar o consumo relativo em porcentagem
for (size_t i = 0; i < 5; i++)
{
    aparelhos[i].consumo_relativo[i] = (aparelhos[i].consumo_relativo[i]*100) / consumo_total;
}//for
// exibindo para o usuario o consumo total

printf("O consumo total e de: %.2f \n", consumo_total);
//for para exibir os 5 consumos relativos em porcentagem
for (size_t i = 0; i < 5; i++)
{

printf("O consumo relativo e de: %.2f porcento \n", aparelhos[i].consumo_relativo[i]);
}//for





    return 0;
}//main
