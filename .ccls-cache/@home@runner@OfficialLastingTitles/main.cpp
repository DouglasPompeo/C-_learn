#include <stdio.h>

void aula01();
void aula02();
void aula03();
void aula04();
void aula05();
void aula06();
void aula07();
void aula08();
void aula09();
void aula10();
void aula11();
void aula12();
void aula13();
int aula14();
int aula15(int numero1, int numero2 );


int main (){
  int variavel;
  printf("doigite o valor :");
  scanf("%i",&variavel);
  printf("%i", aula15(variavel,5));
}


int aula15(int numero1 , int numero2 )
{
  return (numero1 - numero2);
  
}





int aula14()
{
  int numero , valor;
  printf("digite um numero : ");
  scanf("%i", &numero);
  if(numero > 5)
  {
    valor = 1;
  }
  else
  {
    valor =  0;
  }
  printf("nunca chegou aqui");
  return 0;

}





void aula13()
{
  
}





void aula12()
{
 int vetor[10];
  for(int i = 0; i < 10;i++);
  char vetorc[]{'o','l','a'};
  int i;
  for (i = 0; i< 5;i++);
  printf("%i\n",vetor[i]);

  scanf("%i",&vetor[3]);
  for(i = 0; i < 5; i++)
    printf("%i\n",vetor[i]);
}




void aula11()
{
  int numero = 1;
  while (numero <= 10)
  {
    printf("%i\n",numero);
    numero+=1;
  }
}




void aula10()
{
  int num1;
  printf("digite o valor de  num1 :");
  scanf("%i",&num1);
  while(num1 > 5)
    do
  {
    printf("voce digitou um numero maior do que 5");
    getchar();
    printf("\ndigite o valor de num1 :");
    scanf("%i",&num1);
  }while(num1 > 5);
}



void aula09()
{
int num1;
  printf("digite o valor de  num1 :");
  scanf("%i",&num1);
  while(num1 > 5)
  {
    printf("voce digitou um numero maior do que 5");
    getchar();
    printf("\ndigite o valor de num1 :");
    scanf("%i",&num1);
  }
  
}



void aula08()
{
  int num1,num2,num3;
  printf("digite o valor de  num1 :");
  scanf("%i",&num1);
  getchar();
  printf("digite o valor de num2 :");
  scanf("%i",&num2);
  getchar();
  printf("digite o valor de num3 :");
  scanf("%i",&num3);
  
  if (!(num1 > num2) && (num1 > num3))
  {
    printf("num1 eh maior do que algum  dos outros");
  }
}


void aula07(){
  int num1,num2; // declara duas variaveis
  
  printf("digite dois numeros inteiros :"); // solicita o valor das variaveis
  
  scanf("%i%i",&num1,&num2);// le a entrada do teclado e coloca os valores
  
  // nas variantes previamente declaradas
  
  if(num1 > num2){ // se o numero for maior do que o segundo numero 
    
    printf("o numero %i eh maior do que o numero %i", num1,num2); // entao vamos printar a seguinte frase
  }
    else if(num1 < num2){
      printf("o numero %i eh maior do que o numero %i", num2,num1);
    }
      else{
        printf("o numero %i eh igual ao  numero %i", num2,num1);
      }
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
      - subtra????o
      / divis??o
      * multiplica????o
      % modulo
  */
  
  int numero1 = 5 ,
      numero2 = 4 ,
  
  soma,
  subtra????o,
  multiplica????o,
  divis??o,
  modulo;  

  soma = numero1 + numero2;
  subtra????o = numero1 - numero2;
  multiplica????o = numero1 * numero2;
  divis??o = numero1  / numero2;
  modulo  = numero1 % numero2;
  
  printf("a soma eh %i\n",soma);
  printf("a subtra??ao eh %i\n",subtra????o);
  printf("a multiplica??ao eh %i\n",multiplica????o);
  printf("a divisao eh %i\n",divis??o);
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

void aula06(){
  int num1,num2;
  printf("digite dois numeros inteiros :");
  scanf("%i%i",&num1,&num2);
if(num1==num2){
  
  printf("voce digitou dois numeros iguais");
}
  if(num1 !=num2){
    printf("voce digitou dois numeros diferentes");
  }
  
}







