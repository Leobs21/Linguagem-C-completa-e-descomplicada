/*
 * Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma palavra,
 * e o programa informe o número de vezes que aquela palavra aparece dentro do arquivo.
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *file;
    int countWord = 0;
    char delimiter[] = " ,\n!?.-";
    char *text, *textLowerCase, *token, word[30], filename[30];
    
    printf("-Load File-\nEnter File Name: ");
    fgets(filename, 30, stdin);
    
    filename[strcspn(filename, "\n")] = 0;

    file = fopen(filename, "r");

    if(file == NULL){
      perror("error");
      exit(EXIT_FAILURE);
    }

    fseek(file, 0, SEEK_END);
  
    long size = ftell(file);
   
    fseek(file, 0, SEEK_SET);

    text = (char *) malloc(size + 1);

    if(text == NULL){
      perror("error when allocating memory");
      fclose(file);
      exit(EXIT_FAILURE);
    }
    
    fread(text, 1, size, file);

    fclose(file);

    text[size] = '\0';
    
    // set text to lowercase
    /* for(int i = 0; i < strlen(text + 1); i++){
      if (isupper(text[i])){
        text[i] = tolower(text[i]);
      }
    } */
    
    // make a copy of the text in lower case.
    textLowerCase = (char *) malloc(size + 1);
    for(int i = 0; i < strlen(text); i++){
      textLowerCase[i] = tolower(text[i]);
    }

    printf("\nEnter a word: ");
    fgets(word, 30, stdin);

    word[strcspn(word, "\n")] = 0;

    printf("\nText in file:\n%s", text);

    token = strtok(textLowerCase, delimiter); 

    while(token != NULL){
      if(strcmp(token, word) == 0){
        countWord += 1;
      }

      token = strtok(NULL, delimiter);
    }

    printf("\nFile name: %s\nWord: %s\nNumber of times \"%s\" appears: %d\n", filename, word, word, countWord);

    free(text);
    free(textLowerCase);

    return EXIT_SUCCESS;
}
