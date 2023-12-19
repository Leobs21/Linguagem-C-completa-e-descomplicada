/*
 * Crie uma estrutura chamada Cadastro.
 * Essa estrutura deve conter o nome, a idade * e o endereço de uma pessoa.
 * Agora, escreva uma função que receba um inteiro positivo N e
 * retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura.
 * Solicite também que o usuário digite os dados desse vetor dentro da função.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char name[30];
  int age;
  char address[30]; 
} cadastro;

cadastro* get_cad(int n){
  cadastro *p = (cadastro *) malloc(n * sizeof(cadastro));

  if(p == NULL){
    printf("Error. insufficient memory!\n");
    exit(1);
  }

  for(int i = 0; i < n; i++){
    printf("Enter a name[%d]: ", i);
    fgets(p[i].name, 30, stdin); 
    
    int len = strlen(p[i].name);

    if(p[i].name[len] == '\0'){
      p[i].name[len - 1] = '\0';
    }

    printf("Enter %s's age: ", p[i].name);
    scanf("%d", &p[i].age);
    
    setbuf(stdin, NULL);

    printf("Enter %s's address: ", p[i].name);
    fgets(p[i].address, 30, stdin);

    printf("\n");
  }
  return p;
}

int main(void)
{
  int n = 2;
  cadastro * data = get_cad(n);

  for(int i = 0; i < n; i++){
    printf("Name: %s\n", data[i].name);
    printf("Age: %d\n", data[i].age);
    printf("Address: %s\n", data[i].address);
  }
  
  free(data);

  data = NULL;

  return EXIT_SUCCESS;
}
