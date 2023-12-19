/*
 *  Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
 *  Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:
 *
 *              IMC = peso/(altura * altura)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calc_imc(float weight , float height)
{
  return weight / (height * height);
} 

int main()
{
  float weight; 
  float height;
  float imc;

  printf("Calculate the IMC of the person!\n");
  printf("Enter the person weight: ");
  scanf("%f", &weight);

  printf("Enter the person height: ");
  scanf("%f", &height); 
  
  printf("\n");

  printf("Weight: %.2f\n", weight);
  printf("Height: %.2f\n", height);

  imc = calc_imc(weight, height);
  printf("Your IMC: %.2f\n", imc);

  if(imc < 18.0){
    printf("Situation: Underweight\n");
  } else if(imc > 18.0 && imc < 25.0){
    printf("Situation: Optimal Weight\n");
  } else if (imc > 25.0 && imc < 30.0){
    printf("Situation: Overweight\n");
  } else if (imc > 30.0 && imc < 40.0){
    printf("Situation: Obesity\n");    
  } else{
    printf("Situation: Severe Obesity\n"); 
  }

  return EXIT_SUCCESS;
}
