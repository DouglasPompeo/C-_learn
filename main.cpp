#include <stdio.h>

void aula01();
void aula02();
void aula03();
void aula04();
void aula05();
void aula06();




int main (){
  aula05();
}

void aula05(){
  float numero;
  printf("\nDigite outro numero : ");
  getchar();
  scanf("%f",&numero);
  if (1){
    printf("voce digitou um numero diferente de 0 ");

    if(numero){
      printf("voce digitou outro numero diferente de 0!");
    }
  }
}

void aula01(){
  printf("hello world");
}


void aula02(){
  int idade;
  float peso = 37.4;
  idade = 18;
  printf("a idade eh %i e o peso eh %.1f",idade,peso);
}

void aula03(){
  /* operadores aritmeticos

      + soma
      - subtração
      / divisão
      * multiplicação
      % modulo
  */
  
  int numero1 = 5 ,
      numero2 = 4 ,
  
  soma,
  subtração,
  multiplicação,
  divisão,
  modulo;  

  soma = numero1 + numero2;
  subtração = numero1 - numero2;
  multiplicação = numero1 * numero2;
  divisão = numero1  / numero2;
  modulo  = numero1 % numero2;
  
  printf("a soma eh %i\n",soma);
  printf("a subtraçao eh %i\n",subtração);
  printf("a multiplicaçao eh %i\n",multiplicação);
  printf("a divisao eh %i\n",divisão);
  printf("o modulo %i\n",modulo);
}

void aula04(){
  int idade;
  char letra;
  char string(100);

  printf("digite a idade :");
  scanf("%i",&idade);
  printf("a idade eh %i",idade);

  printf("\nDigite seu nome :");
  getchar();
  scanf("%c",&letra);
  printf("o seu nome eh  %c",letra);
}







