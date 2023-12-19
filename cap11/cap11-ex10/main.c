/*
 * Escreva uma função que receba um valor inteiro positivo N por parâmetro e
 * retorne o ponteiro para um vetor de tamanho N alocado dinamicamente.
 * Esse vetor deverá ter os seus elementos preenchidos com certo valor, também passado por parâmetro.
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
 */

#include <stdio.h>
#include <stdlib.h>

int * get_value_arr(int n, int nLen)
{
  int *p = (int *) malloc(nLen * sizeof(int));
  
  /*
   * daria pra usar dois ponteiros no loop a seguir
   * por exemplo:
   * int *p1 = p; aponta pra o inicio do primeiro ponteiro p;
   * while(p1 < p + nLen){*p1++ = n}
   */

  int i = 0;
  
  if(nLen <= 0){
    return NULL;
  } else {
    while(i < nLen){ 
      p[i++] = n;
    }
  }

  return p;
}

int main(void)
{
  int nLen, n; 
  int* arr;

  printf("Enter the size of the array: ");
  scanf("%d", &nLen);
  printf("Enter the value to be stored in the array: ");
  scanf("%d", &n);
   
  arr = get_value_arr(n, nLen);

  if (arr == NULL){
    printf("\nerror: size negative or equal to 0 or insufficient memory!\n");
  } else {
    printf("\nValues in the array:\n"); 

    // testando algumas alternativas 
    int* temp = arr;

    while(temp < arr + nLen){
      printf("%d ", *temp++);
    }
    
    printf("\n");
    
  }

  free(arr);
  arr = NULL;

  return EXIT_SUCCESS;
}
