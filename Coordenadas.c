/*
* @file atividade_1
* @author Deivid da Silva Galvao
* @date 16 mar 2022
* @brief:
1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//definindo a estrutura para representar as coordenadas de um ponto
  struct Coordenadas
  {
      int xa, xb;
      int ya , yb;
  } Coordenadas;//fecha struct

int main(int argc, char const *argv[])
{
  float distancia;

  //coletar os dados referentes a posição dos pontos
printf("Ponto = (Xa, Ya) // (Xb, Yb)");
printf("Digite um valor para a cordenada Xa: ");
scanf("%d", &Coordenadas.xa);
printf("Digite um valor para a cordenada Xb: ");
scanf("%d", &Coordenadas.xb);
printf("Digite um valor para a cordenada Ya: ");
scanf("%d", &Coordenadas.ya);
printf("Digite um valor para a cordenada Yb: ");
scanf("%d", &Coordenadas.yb);
//declarando a formula de distantacia entre dois pontos
distancia = sqrt(pow((Coordenadas.xb - Coordenadas.xa ), 2) + pow((Coordenadas.yb - Coordenadas.ya ), 2));

//exibindo o resultado para o usuario
printf("O valor correspondente a distancia dos pontos digitados eh de: %.2f", distancia);


    return 0;
}//main
